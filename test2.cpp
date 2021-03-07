#include <cstdio>
#include <cstring>
#include <algorithm>
 
using namespace std;
 
const int N = 1005;
 
int n, t, k, m;
int sumT;
 
struct Cus {
 
	int t;//进店的时间
	int k;//炒饭的种类
	int num;//数目
	int ans;//离开的时间
} c[N];
 
int main () {
 
	int T;
	int H, M;
	scanf ("%d", &T);
	while (T--) {
 
		scanf ("%d%d%d%d", &n, &t, &k, &m);
		for (int i = 0; i < m; i++) {
			scanf ("%d:%d%d%d", &H, &M, &c[i].k, &c[i].num);
			c[i].t = H * 60 + M;//按分钟计算
			c[i].ans = -1;
		}
 
		sumT = c[0].t;
		for (int i = 0; i < m; i++) {
 
			if (c[i].ans != -1)
				continue;
			int K = (c[i].num + k - 1) / k;//满足这位客人并且炒尽量多的炒饭
			int have = K * k;	
			int tmp = max (sumT, c[i].t) + (K - 1) * t;//最后一次炒饭的时间或者下一个客人来的时间
			for (int j = i; j < m; j++) {//如果后面的客人有点相同的炒饭的并且来的时间不晚于最后一次炒饭的时间的话，那么就可以将当前剩余的炒饭给这位客人，剩下的部分等轮到他再说。
			
				if (c[j].t > tmp || !have) 
					break;
				if (c[j].k == c[i].k) {
					
					int mm = min (c[j].num, have);
					c[j].num -= mm;
					have -= mm;
				}
				if (c[j].num == 0 && c[j].ans == -1) 
					c[j].ans = tmp + t;
			}
			sumT = tmp + t;
		}
		for (int i = 0; i < m; i++)
			printf ("%02d:%02d\n",(c[i].ans / 60) % 24, c[i].ans % 60); //注意可能有跨过一天的情况
		if (T)
			printf ("\n");
	}
	return 0;
}


#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long int_;
inline int readint(){
	int a = 0; char c = getchar(), f = 1;
	for(; c<'0'||c>'9'; c=getchar())
		if(c == '-') f = -f;
	for(; '0'<=c&&c<='9'; c=getchar())
		a = (a<<3)+(a<<1)+(c^48);
	return a*f;
}
inline void writeint(int x){
	if(x > 9) writeint(x/10);
	putchar((x%10)^48);
}

const int Mod = 1e9+7;
const int MaxN = 4005;
int jc[MaxN], inv[MaxN];
void prepare(){
	jc[1] = inv[1] = 1;
	for(int i=2; i<MaxN; ++i){
		jc[i] = 1ll*jc[i-1]*i%Mod;
		inv[i] = (0ll+Mod-Mod/i)*inv[Mod%i]%Mod;
	}
	for(int i=2; i<MaxN; ++i)
		inv[i] = 1ll*inv[i-1]*inv[i]%Mod;
	jc[0] = inv[0] = 1;
}
inline int_ C(int n,int m){
	if(n == m) return 1;
	if(m < 0 || n < m) return 0;
	return 1ll*jc[n]*inv[m]%Mod*inv[n-m]%Mod;
}

bool vis[MaxN]; // 是否有入度
int a[MaxN];
int d[MaxN]; // 错排数量

int main(){
	prepare();
	int n = readint();
	d[0] = 1, d[1] = 0;
	for(int i=1; i<=n; ++i){
		a[i] = readint();
		if(~a[i]) vis[a[i]] = true;
		d[i+1] = 1ll*i*(d[i]+d[i-1])%Mod;
	}
	int cnt = 0, left = 0;
	for(int i=1; i<=n; ++i){
		if(a[i] != -1) continue;
		if(vis[i]) ++ cnt; // 链尾
		else ++ left; // 未曾出现
	}
	int ans = 0, zxy = 1;
	for(int i=2; i<=cnt; ++i)
		zxy = 1ll*zxy*i%Mod;
	for(int i=0; i<=left; ++i){
		int_ tmp = C(left,i)*zxy%Mod;
		tmp = tmp*C(i+cnt-1,cnt-1)%Mod;
		ans = (ans+tmp*d[left-i])%Mod;
		zxy = 1ll*zxy*(i+1)%Mod;
	}
	printf("%d\n",ans);
	return 0;
}

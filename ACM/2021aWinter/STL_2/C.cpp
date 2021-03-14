#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;
struct cus
{
    int id, t, ans, res;
};

void solve()
{
    int n, t, k, m;
    cus aa[1001];
    scanf("%d %d %d %d", &n, &t, &k, &m);
    for (int i = 0; i < m; i++)
    {
        int h, mte, a, b;
        scanf("%d:%d %d %d", &h, &mte, &aa[i].id, &aa[i].res);
        aa[i].t = h * 60 + mte;
        aa[i].ans = -1;
    }
    int now = aa[0].t;
    for (int i = 0; i < m; i++)
    {
        if (aa[i].ans != -1)
            continue;
        int times = ((aa[i].res + k - 1) / k);
        int rice = times * k;
        int tmp = max(aa[i].t, now) + (times - 1) * t;
        for (int j = i; j < m; j++)
        {
            if (aa[j].t > tmp || rice == 0)
                break;
            if (aa[j].id == aa[i].id )
            {
                int cook = min(rice, aa[j].res);
                rice -= cook;
                aa[j].res -= cook;
            }
            if (aa[j].res == 0 && aa[j].ans == -1)
            aa[j].ans = tmp + t;
        }
        now=tmp+t;
    }
    for (int i = 0; i < m; i++)
        printf("%02d:%02d\n", (aa[i].ans / 60) % 24, aa[i].ans % 60);
}
int main()
{
    //freopen("data.in", "r", stdin);
    //freopen("data.out","w",stdout);
    int T;
    scanf("%d", &T);
    while (T--)
        {solve();if(T)printf("\n");}
    return 0;
}

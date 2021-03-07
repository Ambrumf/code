#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int flag = 0;
int V, vv[26] = {}, G, gg[16][26] = {}, ans[16] = {}, N;
void combination(int k, int pos, int n)
{
    if(!flag)ans[pos] = k;
    if (pos == n-1)
    {
        int vflag = 0;
        int sum[26] = {};
        for (int i = 0; i < n; i++)
            for (int j = 0; j < V; j++)
                sum[j] += gg[ans[i]][j];
        for (int i = 0; i < V; i++)
            if (sum[i] < vv[i])
            {
                vflag = 1;
                return;
            }
        flag = 1;
        N = n;
    }
    for (int i = k+1; i < G; i++)
        if (!flag)
            combination(i, pos+1, n);
}
int main()
{
    cin >> V;
    for (int i = 0; i < V; i++)
        cin >> vv[i];
    cin >> G;
    for (int i = 0; i < G; i++)
        for (int j = 0; j < V; j++)
            cin >> gg[i][j];
    int i;
    for (i = 1; i < G+1 ; i++)
{     if (!flag)for(int l=0;l<16;l++)ans[l]=0;
        if (!flag)for(int j=0;j<G;j++)combination(j, 0, i);}
    cout << N <<' ';
    for (int i = 0; i < N; i++)
    {
        cout << ans[i]+1;
        if (i < N - 1)
            cout << ' ';
    }
    return 0;
}

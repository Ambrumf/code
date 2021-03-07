#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll counter, ans;
void dfs(ll a, ll n, vector<vector<ll>> &map, vector<bool> &isvisit, ll max_len)
{
    if (counter == n)
        {if (max_len < ans)
            ans = max_len;
            return;}
    for (int i = 0; i < n; i++)
        if (map[a][i] != 0 && isvisit[i] == 0)
        {
            if (max_len < map[a][i])
                max_len = map[a][i];
            isvisit[i] = 1;
            counter++;
            dfs(i, n, map, isvisit, max_len);
        }
        isvisit[a]=0;
        counter--;
}
int main()
{
    int n, m;

    while (cin >> n >> m)
    {
        ll max_len=-1;
        ans = 1000000000;
        counter = 0;
        if (n == 0 && m == 0)
            break;
        vector<ll> temp(n, 0);
        vector<vector<ll>> map(n, temp);
        vector<bool> isvisit(n, 0);
        for (ll i = 0; i < m; i++)
        {
            ll a, b, c;
            cin >> a >> b >> c;
            if (map[a][b] > c || map[a][b]==0)
            {
                map[a][b] = c;
                map[b][a] = c;
            }
        }
        isvisit[0] = 1;
        counter++;
        dfs(0, n, map, isvisit,max_len);
        if(ans==1000000000)cout<<"IMPOSSIBLE"<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}

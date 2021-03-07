// using namespace std;
// typedef long long ll;
// #define inf 0x3f3f3f3f;
// ll cnt = 0, n;
// ll prime[100006] = {};
// ll p=0;
// void dfs(ll sum, int i)
// {
//     if (i == p)
//         return;
//     while (sum <= n)
//     {
//         dfs(sum, i + 1);
//         sum *= prime[i] * prime[i];
//         if(sum<=n){cnt++;cout<<sum<<endl;}
//     }
// }
// int main()
// {
//     freopen("in.in", "r", stdin);
//     freopen("ou.out", "w", stdout);
//     bool isprime[1000005]={};
//     memset(isprime,1,sizeof(isprime));
//     for(int i=2;i<=1000005;i++){
//         if(isprime[i])prime[++p]=i;
//         for(int j=1;j<=p;j++){
//             if(prime[j]*i<1000005)isprime[prime[j]*i]=0;
//             if(i%prime[j]==0)break;
//         }
//     }
//     ll acum = 1;
//     int T;
//     cin >> T;
//     for (int k = 1; k <= T; k++)
//     {
//         cnt = 0;
//         acum=1;
//         cin >> n;
//         for (ll i = 0; acum <= n; i++)
//         {
//             dfs(acum, 2);
//             acum *= 2;
//         }
//         cout << "Case " << k << ": ";
//         cout << n - cnt << endl;
//     }
//     return 0;
// }
#define _CRT_SECURE_NO_WARNINGS    
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;

void solve(){
    ll n;
    cin>>n;
    ll cnt=0;
    for(ll i=1;i*i<=n;i++){
        if(i*i<=n)cnt++;
        if(2*i*i<=n)cnt++;
    }
    cout<<n-cnt<<endl;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){cout<<"Case "<<i<<": ";solve();}
    return 0;
}


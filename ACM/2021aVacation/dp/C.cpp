#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,m,aa[200],dp[20000];
    scanf("%lld %lld",&n,&m);
    for(int i=1;i<=n;i++)scanf("%lld",&aa[i]);
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++){
        for(int j=m;j>0;j--)if(j-aa[i]>0)dp[j]=dp[j-aa[i]]+dp[j];
        dp[aa[i]]++;
    }
    cout<<dp[m];
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n,c[200000],a[200000],b[200000],dp[200000],mmax;
    cin>>n;
    for(int i=1;i<=n;i++)scanf("%lld",c+i);
    for(int i=1;i<=n;i++)scanf("%lld",a+i);
    for(int i=1;i<=n;i++)scanf("%lld",b+i);
    dp[1]=0;
    if(a[2]>b[2])swap(a[2],b[2]);
    dp[2]=b[2]-a[2]+1;
    mmax=dp[2]+c[2];
    for(int i=3;i<=n;i++){
        dp[i]=dp[i-1];
        if(a[i]>b[i])swap(a[i],b[i]);
        if(a[i]==b[i])dp[i]=1;
        else dp[i]=max(a[i]-1+1+c[i-1]-b[i]+1+dp[i-1],b[i]-a[i]+1);
        mmax=max(dp[i]+c[i],mmax);
    }
    cout<<mmax<<endl;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}

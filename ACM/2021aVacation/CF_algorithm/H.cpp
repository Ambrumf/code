#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=100001;
const int mod=10007;
ll sum[N][2],c[N],x[N],s[N][2];
int main()
{
    ll n,m,ans=0;
    scanf("%lld %lld",&n,&m);
    for(int i=1;i<=n;i++)scanf("%lld",x+i);
    for(int i=1;i<=n;i++){
        scanf("%lld",&c[i]);
        sum[c[i]][i%2]=(sum[c[i]][i%2]+x[i])%mod;  //+x[i]
        s[c[i]][i%2]++;
    }
    for(int i=1;i<=n;i++)if(s[c[i]][i%2]>1)ans=(ans+i*((s[c[i]][i%2]-2)*x[i]+sum[c[i]][i%2]))%mod;//i%2 )mod
    cout<<ans;
}

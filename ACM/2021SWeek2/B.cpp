#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod=1e9+7;
ll aa[2001],vis[2001];
ll c[2001][2001];
ll f[2001];
void calC(){
    for(ll i=0;i<=2000;i++)for(ll j=0;j<=i;j++)
    {
        if(j==0 || j==i)c[i][j]=1;
        else c[i][j]=(c[i-1][j]+c[i-1][j-1])%mod;
    }
}
ll A(ll n,ll m){
    ll ans=1;
    for(ll i=0;i<m;i++)ans=ans*(n-i)%mod;
    return ans; 
}
int main()
{
    calC();
    f[0]=1;
    f[1]=0;
    f[2]=1;
    for(ll i=3;i<=2000;i++)f[i]=( (i-1) * ( (f[i-1]+f[i-2]) % mod ) )%mod;

    ll n;
    cin>>n;
    ll a=0,b=0;
    for(ll i=1;i<=n;i++){cin>>aa[i];if(aa[i]!=-1)vis[aa[i]]=1;}
    for(ll i=1;i<=n;i++)if(aa[i]==-1){
        if(vis[i])a++;
        else b++;
    }
    ll m=min(a,b),ans=0;
    for(ll i=0;i<=m;i++)ans=(ans+(ll)A(a,i)*A(a,a)%mod*f[b-i]%mod*c[b][i]%mod)%mod;
    //cout<<a<<' '<<b<<endl;
    cout<<ans;
    return 0;
}

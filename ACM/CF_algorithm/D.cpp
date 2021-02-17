#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=(int)5*1e6+1;
int pre[N],aa[N],kk[N],suf[N];
ll inv(ll a,ll mod){
    if(a==1)return 1;
    return (mod-mod/a)*inv(mod%a,mod)%mod;
}
inline ll read(){
    ll s=0,w=1;
    char c=getchar();
    while(c<'0' || c>'9'){if(c=='-')w=-1;c=getchar();}
    while(c>='0' && c<='9'){s=s*10+c-'0';c=getchar();}
    return s*w;
}
int main()
{
    ll n,p,k;
    scanf("%lld %lld %lld",&n,&p,&k);
    kk[1]=k%p;
    for( int i=2;i<=n;++i)kk[i]=(ll)kk[i-1]*k%p;
    for( int i=1;i<=n;++i)aa[i]=read();
    pre[0]=1;suf[n+1]=1;
    for( int i=1;i<=n;++i)pre[i]=(ll)pre[i-1]*aa[i]%p;
    for( int i=n;i>0;--i)suf[i]=(ll)suf[i+1]*aa[i]%p;
    ll sum=0;
    for( int i=1;i<=n;++i)sum=(sum+(ll)kk[i]*pre[i-1]%p*suf[i+1])%p;
    cout<<sum*inv(pre[n],p)%p;
    return 0;
}
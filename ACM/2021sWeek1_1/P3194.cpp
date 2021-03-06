#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;
ll mod=100003;
ll fstpow(ll a,ll b){
    ll ans=1;
    while(b){
        if(b&1)ans=ans*a%mod;
        b/=2;
        a=a*a%mod;
    }
    return ans;
}
int main()
{
    ll n,m;
    cin>>m>>n;
    ll sum=m;
    if(sum>=2)sum=sum*fstpow(m-1,n-1)%mod;
    ll ans=(fstpow(m,n)+mod-sum)%mod;
    cout<<ans;
    return 0;
}

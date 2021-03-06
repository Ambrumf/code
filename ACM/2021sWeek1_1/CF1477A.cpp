#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;
ll gcd(ll a,ll b){
    if(a<b)swap(a,b);
    return b==0?a:gcd(b,a%b);
}
void solve(){
    ll n,k;
    scanf("%lld %lld",&n,&k);
    vector<ll> v;
    for(int i=0;i<n;i++){
        ll t;
        scanf("%lld",&t);
        if(i!=0){
            t-=v[0];
            if(t<0)t=-t;
        }
        v.push_back(t);
    }
    
     ll g=v[1];
     for(int i=2;i<n;i++){
         g=gcd(g,v[i]);
     }
     if((k-v[0])%g==0)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
}
int main()
{
    //freopen("in.in","r",stdin);
    //freopen("out.out","w",stdout);
    int T;
    scanf("%d",&T);
    while(T--)solve();
    return 0;
}

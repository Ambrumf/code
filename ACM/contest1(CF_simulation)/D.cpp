#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;
ll gcd(ll a,ll b){
    if(a<b)swap(a,b);
    return b==0?a:gcd(b,a%b);
}
int main()
{
    ll n,sum=0,mx=-1e9,x;
    cin>>n;
    vector<ll> v;
    for(int i=0;i<n;i++){
        ll t;
        scanf("%lld",&t);
        sum+=t;
        mx=max(mx,t);
        v.push_back(t);
    }
    x=mx;
    ll z=x-v.front();
    for(int i=0;i<v.size()-1;i++){
        z=gcd(z,x-v[i+1]);
    }
    ll y=(n*x-sum)/z;
    cout<<y<<' '<<z;
    return 0;
}

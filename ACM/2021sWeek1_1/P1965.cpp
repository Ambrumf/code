#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;
int n,m,k,x;
ll fstpow(ll a,ll b){
    ll ans=1;
    while(b){
        if(b&1)ans=ans*a%n;
        a=a*a%n;
        b/=2;
    }
    return ans;
}
int main()
{   
    cin>>n>>m>>k>>x;
    ll res;
    res=fstpow(10,k)*m%n+x;
    res%=n;
    cout<<res;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;
ll euler_phi(ll n){
    ll res=n;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0)res=res/i*(i-1);
        while(n%i==0)n/=i;
    }
    if(n!=1)res=res/n*(n-1);
    return res;
}
int main()
{
    ll n,sum=0;
    cin>>n;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            ll t=n/i;
            sum+=euler_phi(n/i)*i;
            if(t!=i)sum+=euler_phi(n/t)*t;
        }
    }
    cout<<sum;  
    return 0;
}

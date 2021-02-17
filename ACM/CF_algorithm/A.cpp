#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll k;
ll fastpow(ll b,ll p){
    ll ans=1;
    while(p>0){
        if(p%2==1){
            ans=ans*b%k;
        }
        b=b*b%k;
        p/=2;
    }
    return ans%k;
}
int main()
{
    ll b,p,ans;
    scanf("%lld %lld %lld",&b,&p,&k);
    ans=fastpow(b,p);
    printf("%lld^%lld mod %lld=%lld",b,p,k,ans);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=19260817;
ll fastpow(ll a,ll b){
    if(b==0)return 1;
    ll ans=1;
    while(b){
        if(b&1)ans=ans*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return ans%mod;
}
int main()
{
    string t;
    ll sum=0,a,b,p=0;
    cin>>t;
    for(int i=t.size()-1;i>=0;i--){
        sum+=(t[i]-'0')*fastpow(10,p);
        sum%=mod;
        p++;
    }
    a=sum;p=0;sum=0;
    cin>>t;
    for(int i=t.size()-1;i>=0;i--){
        sum+=(t[i]-'0')*fastpow(10,p);
        sum%=mod;
        p++;
    }
    b=sum;
    //cout<<a<<' '<<b<<endl;
    cout<<a*fastpow(b,mod-2)%mod;
    return 0;
}

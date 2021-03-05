#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;
int euler_phi(int n){
    int res=n;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            res=res/i*(i-1);
            while(n%i==0)n/=i;
        }
    }
    if(n!=1)res=res/n*(n-1);
    return res;
}
int main()
{
    int n;
    cin>>n;
    if(n==1)cout<<0;
    else if(n==2)cout<<3;
    else {
        int ans=0;
        for(int i=3;i<=n;i++){
            ans+=2*euler_phi(i-1);
        }
        cout<<ans+3;
    }
    return 0;
}

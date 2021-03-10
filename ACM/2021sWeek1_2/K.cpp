#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=10000006;
bool notprime[N];
int prime[N];
int k=0;
int main()
{
    for(int i=2;i<=N;i++){
        if(!notprime[i])prime[++k]=i;
        for(int j=1;j<=k && prime[j]*i<=N;j++){
            notprime[prime[j]*i]=1;
            if(i%prime[j]==0)break;
        }
    }
    int t;
    cin>>t;
    while(t--){
        ll l,r,cnt=0;
        cin>>l>>r;
        for(int i=1;i<=k && (ll)prime[i]*prime[i]<=r ;i++){
            ll sum=(ll)prime[i]*prime[i];
            while(sum<l)sum*=prime[i];
            while(sum<=r){
                cnt++;
                sum*=prime[i];
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}   

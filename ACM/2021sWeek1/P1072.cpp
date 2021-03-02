#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;
const int N=500000;
int prime[500005];
int k=0;
void solve(){
    int a1,a0,b1,b0;
    cin>>a0>>a1>>b0>>b1;
    int ra1[500005]={},ra0[500005]={},rb1[500005]={},rb0[500005]={};
    for(int i=1;i<=k;i++){
        if(a0%prime[i]==0){
            int j=0;
            int t=a0;
            while(t%prime[i]==0){
                t/=prime[i];
                j++;
            }
            ra0[i]=j;
        }}
    for(int i=1;i<=k;i++){
        if(a1%prime[i]==0){
            int j=0;
            int t=a1;
            while(t%prime[i]==0){
                t/=prime[i];
                j++;
            }
            ra1[i]=j;
        }}
    for(int i=1;i<=k;i++){
        if(b1%prime[i]==0){
            int j=0;
            int t=b1;
            while(t%prime[i]==0){
                t/=prime[i];
                j++;
            }
            rb1[i]=j;
        }}
    for(int i=1;i<=k;i++){
        if(b0%prime[i]==0){
            int j=0;
            int t=b0;
            while(t%prime[i]==0){
                t/=prime[i];
                j++;
            }
            rb0[i]=j;
        }}
    int ans=1;
    for(int i=1;i<=k;i++){
        if(ra0[i]!=ra1[i] || rb0[i]!=rb1[i])continue;
        int x=rb0[i]-ra0[i]+1;
        //cout<<prime[i]<<' '<<ra0[i]<<' '<<ra1[i]<<' '<<rb0[i]<<' '<<rb1[i]<<endl;
        ans*=x;
        //cout<<ans<<endl;
    }
    cout<<ans<<endl;
}
int main()
{
    bool isprime[500005];
    memset(isprime,1,sizeof(isprime));
    isprime[0]=isprime[1]=0;
    for(int i=2;i<=N;i++){
        if(isprime[i])prime[++k]=i;
        for(int j=1;j<=k;j++){
            if((ll)prime[j]*i<=N)isprime[prime[j]*i]=0;
            if(i%prime[j]==0)break;
        }
    }
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}

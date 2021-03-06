#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;
ll ans,cnt=-1e9,n;
ll prime[12]={2,3,5,7,11,13,17,19,23,29,31,37};
void dfs(ll pri,ll sum,ll acum,ll mx){
    if(pri==12)return;
    ll j=0;
    ll x=sum;
    while(x<=n && j<=mx){
        x*=prime[pri];
        j++;
    }
    j--;
    for(int i=1;i<=j;i++){
        sum*=prime[pri];
        dfs(pri+1,sum,acum*(1+i),i);
    }
    if(j==0)return;
    if(cnt<acum*(1+j) && sum<=n ){ans=sum;cnt=acum*(1+j);}
    else if(cnt==acum*(1+j) && sum<=n && ans>sum){ans=sum;}
}
int main()
{
    cin>>n;
    if(n==1){cout<<1;return 0;}
    dfs(0,1,1,9999);
    cout<<ans;
    return 0;
}
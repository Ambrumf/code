#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;

int main()
{
    int v,n,back[40],dp[200005]={};
    cin>>v>>n;
    for(int i=1;i<=n;i++)cin>>back[i];
    for(int j=1;j<=n;j++)for(int i=1;i<=v;i++){
        if(i-back[j]>=0)dp[i]=max(dp[i],dp[i-back[j]]+back[j]);
    }
    cout<<v-dp[v];
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;
//基础01背包
// int main()
// {
//     int W,n,v[1005],dp[105][1005],w[1005];
//     cin>>W>>n;
//     for(int i=1;i<=n;i++)cin>>w[i]>>v[i];
//     for(int k=0;k<=W;k++)dp[0][k]=0;
//     for(int i=1;i<=n;i++)for(int k=w[i];k<=W;k++){
//             dp[i][k]=max(dp[i-1][k],(k-w[i]>=0)?dp[i-1][k-w[i]]+v[i]:-1);
//         }
//     cout<<dp[n][W];
//     return 0;
// }

//一维dp
// int main(){
//     int W,n,v[1005],dp[1005],w[1005];
//     cin>>W>>n;
//     for(int i=1;i<=n;i++)cin>>w[i]>>v[i];
//     for(int j=0;j<=W;j++)dp[j]=0;
//     for(int i=1;i<=n;i++)for(int j=W;j>=w[i];j--){
//         dp[j]=max(dp[j],j-w[i]>=0?dp[j-w[i]]+v[i]:-1);
//     }
//     cout<<dp[W];
// }

int main(){
    int W,n,v[1005],dp[1005],w[1005];
    cin>>W>>n;
    for(int i=1;i<=n;i++)cin>>w[i]>>v[i];
    for(int j=0;j<=W;j++)dp[j]=0;
    for(int i=1;i<=n;i++)for(int j=W;j>=w[i];j--){
        if(j-w[i]>=0)dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
    }
    cout<<dp[W];
}

#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int dp[68]={};
    memset(dp,1e9,sizeof(dp));
    dp[0]=0;
    int k[5]={1,5,10,25};
    for(int j=1;j<=67;j++)
    for(int i=0;i<5;i++){
        if(j-k[i]>=0)dp[j]=min(dp[j-k[i]],dp[j]);
    }
    cout<<dp[67];
    return 0;
}

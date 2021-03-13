#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int dp[32769][4];
int coin[3]={1,2,3};
int main()
{
    for(int i=1;i<=32768;i++)
        for(int j=1;j<=3;j++){
            if(i==1 || j==1)dp[i][j]=1;
            else if(i==j)dp[i][j]=dp[i-1][j-1]+1;
            else dp[i][j]=dp[i-j][j]+dp[i][j-1];
        }
    int n;
    while(~scanf("%d",&n)){
        printf("%d\n",dp[n][3]);
    }
    return 0;
}

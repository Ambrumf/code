#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[50000][3]={};
int coin[3]={1,2,3};
int main()
{
    int n;
    while(cin>>n){
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=n;i++)dp[i][1]=1;
        for(int k=1;k<3;k++)for(int i=)
    }
    return 0;
}

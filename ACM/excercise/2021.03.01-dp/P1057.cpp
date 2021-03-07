#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
#include <stdio.h>
#include <cstring>
using namespace std;
typedef long long ll;
//+1:(i+1-k)%n+k;
//-1:(i+n-1-k)%n+k;
int main()
{
    int n,m,dp[50][50]={};
    cin>>n>>m;
    dp[0][1]=1;
    for(int k=1;k<=m;k++)for(int i=1;i<=n;i++){
        dp[k][i]=dp[k-1][(i%n)+1]+dp[k-1][(i+n-2)%n+1];
    }
    cout<<dp[m][1];
    return 0;
}

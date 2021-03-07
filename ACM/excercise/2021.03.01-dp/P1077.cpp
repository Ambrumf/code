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
int mod=1000007;
int main()
{
    int n,m,aa[105],dp[105]={};
    cin>>n>>m;
    dp[0]=1;
    for(int i=1;i<=n;i++)cin>>aa[i];
    for(int k=1;k<=n;k++)for(int i=m;i>=1;i--){
        for(int j=1;j<=aa[k];j++)if(i-j>=0){dp[i]+=dp[i-j];dp[i]%=mod;}
    }
    cout<<dp[m];
    return 0;
}

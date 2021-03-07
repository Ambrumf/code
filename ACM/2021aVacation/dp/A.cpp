#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll Map[21][21],n,m;
ll dx[8]={-2,-2,-1,-1,1,1,2,2},dy[8]={1,-1,2,-2,2,-2,1,-1};
bool inboard(int x,int y){
    if(x>=0 && x<n && y>=0 && y<m )return 1;
    return 0;
}
int main()
{
    ll ya,yb,dp[21][21]={};
    scanf("%lld %lld %lld %lld",&n,&m,&ya,&yb);
    n++;m++;
    dp[ya][yb]=-1;dp[0][0]=1;
    for(int i=0;i<8;i++)if(inboard(ya+dx[i],yb+dy[i]))dp[ya+dx[i]][yb+dy[i]]=-1;
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)if(dp[i][j]!=-1)
    {
        if(i>0 && dp[i-1][j]!=-1)dp[i][j]+=dp[i-1][j];
        if(j>0 && dp[i][j-1]!=-1)dp[i][j]+=dp[i][j-1];
    }
    cout<<dp[n-1][m-1];
    return 0;
}

#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<string>
#include<string.h>
#include<vector>
#include<utility>
#include<map>
#include<queue>
#include<set>
#include<stack>
#define mx 0x3f3f3f3f3f3f3f
#define ll long long
#define MAXN 100
using namespace std;
ll dp[200005][2];
char s[200005];
ll n,a,b,t;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        scanf("%s",s+1);
        for(int i=0;i<=n;i++)//初始化dp
        {
            dp[i][0]=mx;
            dp[i][1]=mx;
        }    
        dp[0][0]=b;
        dp[0][1]=mx;
        for(int i=1;i<=n;i++)
        {
            if(s[i]=='1')//高柱子的右边一定是长度为2的管子
                dp[i][1]=min(dp[i][1],dp[i-1][1]+a+b*2);
            else//低柱子的右边可能是长度为1的，也可能是长度为2的管子，两者取更小的花费
            {
                dp[i][0]=min(dp[i][0],min(dp[i-1][0]+a+b,dp[i-1][1]+2*a+b));
                dp[i][1]=min(dp[i][1],min(dp[i-1][0]+2*a+2*b,dp[i-1][1]+a+b*2));
            }
        }
        cout<<dp[n][0]<<endl;
    }
    return 0;
}
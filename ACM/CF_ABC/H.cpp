#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n,a,b,dp[200005][2];//a:pipline b:pillar
    cin>>n>>a>>b;
    string t;
    cin>>t;
    memset(dp,0x3f,sizeof(dp));
    dp[0][0]=b;
    for(int i=0;i<n;i++){
        if(t[i]=='1')dp[i+1][1]=dp[i][1]+a+2*b;
        else {
            dp[i+1][0]=min(dp[i][0]+a+b,dp[i][1]+2*a+b);
            dp[i+1][1]=min(dp[i][0]+2*(a+b),dp[i][1]+a+2*b);
        }
    }
    cout<<dp[n][0]<<endl;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}
/*
4
8 2 5
00110010
8 1 1
00110010
9 100000000 100000000
010101010
2 5 1
00
Output
94
25
2900000000
13
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[2005][2005];
int main()
{
    string a,b;
    cin>>a>>b;
    ll alen=a.size(),blen=b.size();

    for(int i=0;i<=alen;i++)dp[i][0]=i;
    for(int j=0;j<=blen;j++)dp[0][j]=j;
    for(int i=1;i<=alen;i++)for(int j=1;j<=blen;j++){
        if(a[i-1]==b[j-1])dp[i][j]=dp[i-1][j-1];
        else dp[i][j]=min(min(dp[i-1][j]+1,dp[i][j-1]+1),dp[i-1][j-1]+1);
    }
    cout<<dp[alen][blen];
}
//sfdqxbw
//gfdgw

//4
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll tmp[75],k,aa[75][75],m;
void permulation(ll num,ll pos,ll len,ll sum,ll i){
    if(num==len){tmp[sum%k]=max(tmp[sum%k],sum);return;}
    if(pos>m)return;
    permulation(num+1,pos+1,len,sum+aa[i][pos],i);
    permulation(num,pos+1,len,sum,i);
}
int main()
{
    ll n,dp[75][75]={},len;
    cin>>n>>m>>k;
    len=m/2;
    for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)cin>>aa[i][j];
    for(int i=1;i<=n;i++){
        memset(tmp,0,sizeof(tmp));
        for(int width=1;width<=len;width++)permulation(0,1,width,0,i);
        //for(int i=0;i<k;i++)cout<<tmp[i]<<' ';
        if(i!=1)for(int p=0;p<=k-1;p++)for(int q=0;q<=k-1;q++)dp[i][(p+q)%k]=max(dp[i][(p+q)%k],dp[i-1][q]+tmp[p]);
        if(i==1)for(int p=0;p<k;p++)dp[i][p]=tmp[p];
    }
    /*for(int i=0;i<=n;i++){
        for(int j=0;j<k;j++)cout<<dp[i][j]<<' ';
        cout<<endl;
    }*/
    cout<<dp[n][0];
    return 0;
}

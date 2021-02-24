#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;
void solve(){
    ll n,aa[100005]={},pos[100005]={},dp[100005]={},k=1,ans[100005];
    cin>>n;
    for(int i=1;i<=n;i++){scanf("%lld",&aa[i]);pos[aa[i]]=i;}
    dp[0]=0;
    dp[1]=aa[1];
    k++;
    for(int i=2;i<=n;i++){
        if(aa[i]>dp[k-1]){dp[k]=aa[i];k++;}
        else {
            int l=1,r=k,mid;
            while(l<r){
                mid=(l+r)/2;
                if(dp[mid]<aa[i])r=mid;
                else l=mid+1;
            }
            if(l==1)continue;
            dp[l]=aa[i];
            //cout<<i<<' '<<dp[l]<<' ';
        }
    }
    k--;
    //for(int i=1;i<=k;i++)cout<<dp[i]<<' ';
    //    cout<<endl;
    int s=1,now=n+1;
    ll sum;
    for(int i=k;i>=1;i--){
        for(int j=pos[dp[i]];j<now;j++)cout<<aa[j]<<' ';
        now=pos[dp[i]];
    }
    cout<<endl;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}
/*
inputCopy
4
4
1 2 3 4
5
1 5 2 4 3
6
4 2 5 3 6 1
1
1
outputCopy
4 3 2 1
5 2 4 3 1
6 1 5 3 4 2
1
*/

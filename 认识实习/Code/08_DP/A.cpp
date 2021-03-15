#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int k=0;
void solve(){
    k++;
    int n;
    cin>>n;
    int aa[100005],pre[100005],mx=-1e9,mn=0,mxpos=0,mnpos=0,ans=-1e9;
    pre[0]=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&aa[i]);
        pre[i]=pre[i-1]+aa[i];
        if(pre[i]>mx){mx=pre[i];mxpos=i;}
        if(pre[i]<mn){mn=pre[i];mnpos=i;}
        ans=max(ans,mx-mn);
    }
    printf("Case %d:\n%d %d %d\n\n",k,ans,mnpos+1,mxpos);
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)solve();
    return 0;
}

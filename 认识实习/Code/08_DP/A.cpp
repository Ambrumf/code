#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int k=0,aa[100005],pre[100005],mnpos[100005],s[100005],ans,lpos,rpos;
void solve(){
    k++;
    int n;
    cin>>n;
    pre[0]=s[0]=0;
    mnpos[0]=1;
    for(int i=1;i<=n;i++){
        scanf("%d",&aa[i]);
        pre[i]=pre[i-1]+aa[i];
        s[i]=s[i-1];
        mnpos[i]=mnpos[i-1];
        if(s[i]>pre[i-1]){s[i]=pre[i-1];mnpos[i]=i;};
    }
    ans=-1e9;
    for(int i=1;i<=n;i++){
        if(pre[i]-s[i]>ans){ans=pre[i]-s[i];lpos=mnpos[i];rpos=i;}
    }
    printf("Case %d:\n%d %d %d",k,ans,lpos,rpos);
}
int main()
{
    //freopen("data.in","r",stdin);
    //freopen("data.out","w",stdout);
    int T;
    scanf("%d",&T);
    while(T--){
        solve();
        if(T!=0)cout<<endl<<endl;
        else cout<<endl;
    }
    return 0;
}

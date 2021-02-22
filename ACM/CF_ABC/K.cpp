#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n,g[105][105];
    memset(g,0x3f,sizeof(g));
    string t;
    cin>>n;
    for(int i=1;i<=n;i++)g[i][i]=0;
    for(int i=1;i<=n;i++){
        cin>>t;
        for(int j=0;j<n;j++)if(t[j]=='1')g[i][j+1]=1;
    }
    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            {
                if(g[i][k]!=0x3f3f3f3f && g[k][j]!=0x3f3f3f3f && g[i][k]+g[k][j]<g[i][j])
                g[i][j]=g[i][k]+g[k][j];
            }
    
    //cout<<endl;
    //for(int i=1;i<=n;i++)
    //   for(int j=1;j<=n;j++){cout<<g[i][j]<<' ';if(j==n)cout<<endl;}
    int aa[1000005],len,ans[1000005],k=0;
    cin>>len;
    for(int i=0;i<len;i++)scanf("%d",&aa[i]);
    int l=0,r=1;
    ans[k++]=aa[0];
    while(r<len){
        if(g[aa[l]][aa[r]]==r-l){r++;}
        else {ans[k++]=aa[r-1];l=r-1;}
    }
    ans[k++]=aa[len-1];
    cout<<k<<endl;
    for(int i=0;i<k;i++){printf("%d",ans[i]);if(i!=k-1)cout<<' ';}
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n,g[105][105];
    memset(g,0x3f,sizeof(g));
    string t;
    cin>>n;
    for(int i=0;i<n;i++)g[i][i]=0;
    for(int i=0;i<n;i++){
        cin>>t;
        for(int j=0;j<n;j++)if(t[j]=='1')g[i][j]=1;
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            for(int k=0;k<n;k++)
            {
                if(g[i][k]+g[k][j]<g[i][j])
                g[i][j]=g[i][k]+g[k][j];
            }
    int aa[1000005],len,ans[1000005],k=0;
    cin>>len;
    for(int i=0;i<len;i++)scanf("%d",&aa[i]);
    int l=0,r=1;
    ans[0]=aa[0];
    while(r<len){
        if(g[aa[r]][aa[l]]!=r-l){ans[++k]=aa[r-1];l=r;}
        r++;
    }
    cout<<k<<endl;
    for(int i=0;i<k;i++){printf("%d",aa[i]);if(i!=n-1)cout<<' ';}
    return 0;
}

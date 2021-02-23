#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;

void solve(){
    int aa[105][105];
    memset(aa,0x3f,sizeof(aa));
    int n,m;
    cin>>n>>m;
    while(m--){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        aa[a][b]=aa[b][a]=c;
    }
    for(int k=1;k<=n;k++)
        for(int i=1;i<n;i++)
            for(int j=1;j<=n;j++)
                    aa[i][j]=min(aa[i][j],aa[i][k]+aa[k][j]);

    cout<<aa[1][n]<<endl;     
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}

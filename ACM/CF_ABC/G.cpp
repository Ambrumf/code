#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
int dx[4]={0,1,1,0},dy[4]={0,0,1,1};
bool inboard(int x,int y){
    if(x>0 && x<=n && y>0 && y<=m)return 1;
    return 0;
}
int main()
{
    int aa[100][100],bb[100][100]={},step[2][2600],cnt=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)scanf("%d",&aa[i][j]);
    for(int i=1;i<=n;i++)for(int j=1;j<=m;j++){
        int flag=1;
        if(aa[i][j]){
            for(int k=1;k<4;k++){
            int nx=i+dx[k],ny=j+dy[k];
            if(!inboard(nx,ny) || (inboard(nx,ny) && !aa[nx][ny]) )flag=0;
            }
             if(flag){for(int k=0;k<4;k++){
            int nx=i+dx[k],ny=j+dy[k];
            bb[nx][ny]=1;}
            step[0][cnt]=i;step[1][cnt]=j;
            cnt++;
            }
        }
    }
    int flag=1;
    for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)if(aa[i][j]!=bb[i][j]){flag=0;break;}
    if(flag){
        cout<<cnt<<endl;
        for(int i=0;i<cnt;i++)printf("%d %d\n",step[0][i],step[1][i]);
    }
    else cout<<-1<<endl;
    //for(int i=1;i<=n;i++)for(int j=1;j<=m;j++){cout<<bb[i][j]<<' ';if(j==3)cout<<endl;}
    return 0;
}

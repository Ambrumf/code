#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
typedef long long ll;
int n,m,aa[1001][1001],dx[4]={0,1,0,-1},dy[4]={1,0,-1,0},ok,vis[1001][1001][4];
bool inboard(int x,int y){
    if(x>0 && x<=n && y>0 && y<=m)return 1;
    return 0;
}
void dfs(int x,int y,int tx,int ty,int dir,int turn){
    int nx=x+dx[dir],ny=y+dy[dir];
    if(vis[nx][ny][dir]!=-1)return;
    if(!inboard(nx,ny))return;
    if(turn > 2)return;
    if(nx==tx && ny==ty){ok=1;return;}
    vis[nx][ny][dir]=1;
    dfs(nx,ny,tx,ty,dir,turn);
    dfs(nx,ny,tx,ty,(dir+1)%4,turn+1);
    dfs(nx,ny,tx,ty,(dir+4-1)%4,turn+1);
}
int main()
{
    while(cin>>n>>m){
        memset(vis,-1,sizeof(vis));
        if(n==0)break;
        for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)scanf("%d",&aa[i][j]);
        int q;
        cin>>q;
        while(q--){
            int x1,y1,x2,y2;
            ok=0;
            scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
            if(aa[x1][y1]!=aa[x2][y2] || aa[x1][y1]==0)ok=0;
            else for(int k=0;k<4;k++)dfs(x1,y1,x2,y2,k,0);
            if(ok==1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}

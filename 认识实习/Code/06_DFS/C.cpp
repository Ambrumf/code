#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
#include <stdio.h>
#include <cstring>
using namespace std;
typedef long long ll;
char cc[1000][1000];
int vis[1000][1000],k=0,n,m,dx[8]={-1,-1,0,1,1,1,0,-1},dy[8]={0,1,1,1,0,-1,-1,-1};
bool inboard(int x,int y){
    if(x>=0 && x<n && y>=0 && y<m)return 1;
    return 0;
}
void check(int x,int y){
    int nx,ny;
    for(int k=0;k<8;k++){
        nx=x+dx[k];
        ny=y+dy[k];
        if(inboard(nx,ny) && cc[nx][ny]=='W' && vis[nx][ny]==-1){
            vis[nx][ny]=k;
            check(nx,ny);
        }
    }
}
int main()
{
    memset(vis,-1,sizeof(vis));
    cin>>n>>m;
    for(int i=0;i<n;i++){
        string t;
        cin>>t;
        for(int j=0;j<m;j++)cc[i][j]=t[j];
    }
    for(int i=0;i<n;i++)for(int j=0;j<m;j++){
        if(cc[i][j]=='W' && vis[i][j]==-1){
            cc[i][j]=++k;
            check(i,j);
        }
    }
    cout<<k;
    return 0;
}

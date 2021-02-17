#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int dx[8]={-1,-1,-1,0,0,1,1,1,},dy[8]={-1,0,1,-1,1,-1,0,1};
bool inboard(int x,int y,int n,int m){
    if(x>=0 && x<n && y>=0 && y<m)return 1;
    return 0;
}
int main()
{
    char aa[101][101],ans[101][101];
    int n,m,nx,ny;
    scanf("%d %d",&n,&m);
    string t;
    for(int i=0;i<n;i++){
        cin>>t;
        for(int j=0;j<m;j++)aa[i][j]=t[j];
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            if(aa[i][j]=='*')ans[i][j]='*';
            else {
                int sum=0;
                for(int k=0;k<8;k++){
                    nx=i+dx[k];
                    ny=j+dy[k];
                    if(inboard(nx,ny,n,m) && aa[nx][ny]=='*')sum++;
                }
                ans[i][j]=sum+'0';
            }
        }   
    for(int i=0;i<n;i++)for(int j=0;j<m;j++){cout<<ans[i][j];if(j==m-1)cout<<endl;}
    return 0;
}

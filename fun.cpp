#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int aa[26][26],vis[26][26],cnt=0,step[2][600],sum[26];
ll total=1;
ll fun=1;
void dfs(int x,int y,int deep){
    if(deep==cnt){for(int k=1;k<=cnt;k++)cout<<"第"<<k<<"步为: ("<<step[0][k-1]<<","<<step[1][k-1]<<")"<<endl;exit(0);}
    for(int j=1;j<=25;j++)if(aa[y][j] && !vis[y][j]){
        vis[y][j]=vis[j][y]=1;
        step[0][deep+1]=y;step[1][deep+1]=j;
        dfs(y,j,deep+1);
        vis[y][j]=vis[j][y]=0;
    }
}
int main()
{
    for(int i=1;i<=25;i++)for(int j=1;j<=25;j++){cin>>aa[i][j];if(aa[i][j]){cnt++;sum[i]++;}}
    cnt=1;
    for(int i=1;i<=25;i++)total*=sum[i];
    for(int i=1;i<=25;i++)cout<<i<<":"<<sum[i]<<endl;
    cout<<total<<endl;
    cout<<"处理中..."<<endl;
    for(int i=1;i<=25;i++)for(int j=1;j<=25;j++){
        if(aa[i][j]){
            step[0][0]=i;step[1][0]=j;
            vis[i][j]=vis[j][i]=1;
            dfs(i,j,0);
            vis[i][j]=vis[j][i]=0;
    }
    }
    cout<<"error";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX=1008;
int aa[MAX][MAX],Map[MAX][MAX],dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}},ans[100009];
int n,m,a,b;
void dfs(int x,int y,char fg,int index){
    if(x<0 || x>=n || y<0 || y>=n)return;
    if(aa[x][y]!=-1 || Map[x][y]!=fg)return;
    aa[x][y]=index;ans[index]++;
    for(int i=0;i<4;i++){dfs(x+dir[i][1],y+dir[i][0],!fg,index);}
}
int main()
{
    string t;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        cin>>t;
        for(int j=0;j<n;j++)Map[i][j]=t[j]-'0';
    }
    memset(aa,-1,sizeof(aa));
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        a--;b--;
        dfs(a,b,Map[a][b],i);
        printf("%d\n",ans[aa[a][b]]);
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string des="111110111100*110000100000";
char mtx[5][5];
int dx[8]={-2,-2,-1,1,-1,1,2,2},dy[8]={-1,1,2,2,-2,-2,-1,1},ok;
int calH(){
    int sum=0;
    char des[5][5]={
    {'1','1','1','1','1'},
    {'0','1','1','1','1'},
    {'0','0','*','1','1'},
    {'0','0','0','0','1'},
    {'0','0','0','0','0'}
    };
    for(int i=0;i<5;i++)for(int j=0;j<5;j++)if(des[i][j]!=mtx[i][j])sum++;
    return sum;
}
bool inboard(int x,int y){
    if(x>=0 && x<5 && y>=0 && y<5)return 1;
    return 0;
}

void dfs(int step,int x,int y,int maxdeep,int l){
    if(step==maxdeep){
        if(!calH())ok=1;
        return;}
    int nx,ny;
    for(int i=0;i<8;i++){
        nx=x+dx[i]; 
        ny=y+dy[i];
        if(inboard(nx,ny) && i+l!=7){
            swap(mtx[nx][ny],mtx[x][y]);
            if(step+calH()<=maxdeep)dfs(step+1,nx,ny,maxdeep,i);
            if(ok)return;
            swap(mtx[nx][ny],mtx[x][y]);
        }
    }
}
void solve(){
    int x,y;
    string t;
    for(int i=0;i<5;i++){
        cin>>t;
        for(int j=0;j<5;j++){if(t[j]=='*'){x=i;y=j;}mtx[i][j]=t[j];}
    }
    //for(int i=0;i<5;i++)for(int j=0;j<5;j++){cout<<mtx[i][j]<<' ';if(j==4)cout<<endl;}
    for(int deep=1;deep<=15;deep++){
        ok=0;
        dfs(0,x,y,deep,-1);
        if(ok){printf("%d\n",deep);break;}
    }
    if(!ok)printf("-1\n");
}
int main()
{
    //cout<<calH();
    int T;
    scanf("%d",&T);
    while(T--)solve();
    return 0;
}

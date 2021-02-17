#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int cpy[5][5][7],step[5][3],n,m[5][7],clr[5][7],ok=0;
void check(){
    for(int i=0;i<5;i++){
        int cnt=0;
        for(int j=0;j<7;j++){
            if(!m[i][j])cnt++;
            else swap(m[i][j-cnt],m[i][j]);
        }
    }
    //for(int i=0;i<5;i++)for(int j=0;j<7;j++){cout<<m[i][j]<<' ';if(j==6)cout<<endl;}
    //cout<<endl<<"@@@@"<<endl;
}
bool clear(){
    int flag=0;
    for(int i=0;i<5;i++)
        for(int j=0;j<7;j++){
            if(i>=1 && i<=3 && m[i][j] && m[i-1][j]==m[i][j] && m[i+1][j]==m[i][j]){
                clr[i][j]=clr[i-1][j]=clr[i+1][j]=1;flag=1;
            }
            if(j>=1 && j<=5 && m[i][j] && m[i][j]==m[i][j-1] && m[i][j]==m[i][j+1]){
                clr[i][j]=clr[i][j+1]=clr[i][j-1]=1;flag=1;
            }
        }
    if(!flag)return 0;
    for(int i=0;i<5;i++)
        for(int j=0;j<7;j++)if(clr[i][j]==1){m[i][j]=0;clr[i][j]=0;}
    //for(int i=0;i<5;i++)for(int j=0;j<7;j++){cout<<m[i][j]<<' ';if(j==6)cout<<endl;}
    //cout<<endl<<"!!!!"<<endl;
    return 1;
}
void cp(int dep){
    for(int i=0;i<5;i++)
        for(int j=0;j<7;j++)cpy[dep][i][j]=m[i][j];
}
void pst(int dep){
    for(int i=0;i<5;i++)
        for(int j=0;j<7;j++)m[i][j]=cpy[dep][i][j];
}
bool emp(){
    for(int i=0;i<5;i++)if(m[i][0])return 0;
    return 1;
}
void dfs(int dep,int n){
    check();
    while(clear())check();
    //for(int i=0;i<5;i++)for(int j=0;j<7;j++){cout<<m[i][j]<<' ';if(j==6)cout<<endl;}
    if(emp()){for(int i=0;i<dep;i++)printf("%d %d %d\n",step[i][0],step[i][1],step[i][2]);exit(0);}
    if(dep==n)return;
    for(int i=0;i<5;i++)
        for(int j=0;j<7;j++){
            if(!m[i][j])continue;
            if(i<4 && m[i][j]!=m[i+1][j]){//right
                cp(dep);
                swap(m[i][j],m[i+1][j]);
                step[dep][0]=i;step[dep][1]=j;step[dep][2]=1;
                dfs(dep+1,n);
                pst(dep);
            }
            if(i>0 && !m[i-1][j]){//left
                cp(dep);
                swap(m[i][j],m[i-1][j]);
                step[dep][0]=i;step[dep][1]=j;step[dep][2]=-1;
                dfs(dep+1,n);
                pst(dep);
            }
        }
}
int main()
{
    scanf("%d",&n);
    for(int i=0;i<5;i++){
        int j=0,t;
        while(cin>>t){
            if(!t)break;
            m[i][j]=t;
            j++;
        }
    }
    dfs(0,n);
    printf("-1");
    return 0;
}

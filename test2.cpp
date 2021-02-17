#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string des="111110111100*110000100000";
char mtx[5][5];
int dx[8]={-2,-2,-1,-1,1,1,2,2},dy[8]={-1,1,-2,2,-2,2,-1,1};
struct node{
    string t;
    int g,f;
    node(string a,int x,int y){t=a;g=x;f=y;}
    node(){};
};
void toM(string t){
    int i=0,j=0;
    for(int k=0;k<t.size();k++){
        mtx[i][j]=t[k];
        j++;
        if(k%5==4){i++;j=0;}
    }
}
int ab(int x){
    if(x<0)x=-x;
    return x;
}
int calH(){
    int sum=0;
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++){
            if(mtx[i][j]=='1'){
                if(i==0 || i==1 && j>=1 || i==2 && j>=3 || i==3 && j==4)continue;
                else sum+=1;
            }
            else if(mtx[i][j]=='0'){
                if(i==4 || i==3 && j<=3 || i== 2 && j<=1 || i==1 && j==0)continue;
                else sum+=1;
            }
            else sum+=1;
        }
    return sum;
}
bool cmp(node a,node b){
    return a.f>b.f;
}
bool inboard(int x,int y){
    if(x>=0 && x<5 && y>=0 && y<5)return 1;
    return 0;
}
string toS(){
    string t="";
    for(int i=4;i>=0;i--)
        for(int j=4;j>=0;j--)t.insert(0,1,mtx[i][j]);
    return t;
}
void solve(){
    map<string,int>g,vis;
    int x,y,nx,ny,cf,cg,nf,ng,flag=0;
    string t="";
    for(int i=0;i<5;i++){
        string tmp;
        cin>>tmp;
        t+=tmp; 
    }
    toM(t);
    vis[t]=1;
    node st(t,0,vis[t]);
    vector<node> v;
    v.push_back(st);
    while(!v.empty()){
        if(flag)break;
        sort(v.begin(),v.end(),cmp);
        st=v.back();
        v.pop_back();
        toM(st.t);
        cg=st.g;cf=st.f;
        for(int i=0;i<5;i++)for(int j=0;j<5;j++)if(mtx[i][j]=='*'){x=i;y=j;}
        for(int i=0;i<8;i++){
            nx=x+dx[i];
            ny=y+dy[i];
            if(inboard(nx,ny)){
                swap(mtx[x][y],mtx[nx][ny]);
                string tmp=toS();
                ng=cg+1;nf=calH()+ng;
                swap(mtx[x][y],mtx[nx][ny]);
                if(nf>15)continue;
                if(tmp==des && ng<=15){cout<<ng<<endl;flag=1;break;}
                if(!vis[tmp]){
                    vis[tmp]=ng;
                    v.push_back(node(tmp,ng,nf));
                }
                else if(vis[tmp]>ng)vis[tmp]=ng;
                
            }
        }
    }
    if(!flag)cout<<-1<<endl;
}
int main()
{
    toM(des);
    //cout<<calH();
    int T;
    scanf("%d",&T);
    while(T--)solve();
    return 0;
}

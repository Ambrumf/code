#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int des=123804765;
int f[10],vis[362882]={},step[362882]={};
struct node{
    int num,step;
    node(int a,int b){num=a;step=b;}
    node(){};
};
int matrix[3][3];
void toM(int x){
    int div=100000000;
    for(int i=0;i<3;i++) 
        for(int j=0;j<3;j++){
            matrix[i][j]=x/div;
            x%=div;
            div/=10;}
}
int toN(){
    int sum=0;
    for(int i=0;i<3;i++) 
        for(int j=0;j<3;j++){
            sum=sum*10+matrix[i][j];
        }
        return sum;
}
bool inboard(int x,int y){
    if(x>=0 && x<3 && y>=0 && y<3)return 1;
    return 0;
}

//康托展开参考https://blog.csdn.net/ltrbless/article/details/87696372
int contor(int x)
{
    string t=to_string(x);
    int ans=1;
    int n=t.size();
    for(int i=0;i<n;i++){
        int tmp=0;
        for(int j=i+1;j<n;j++){
            if(t[j]<t[i])tmp++;
        }
        ans+=tmp*f[n-1-i];
    }
    return ans;
}

void show(){
    for(int i=0;i<3;i++)    
        for(int j=0;j<3;j++){cout<<matrix[i][j]<<' ';if(j==2)cout<<endl;}
}
int main()
{
    f[0]=f[1]=1;
    for(int i=2;i<=9;i++)f[i]=f[i-1]*i;
    //cout<<contor(876543210);return 0;
    int tt,x,y,nx,ny,ans,temp;
    int dx[4]={0,0,1,-1},dy[4]={1,-1,0,0};
    cin>>tt;     
    if(tt==des){cout<<0;return 0;}
    queue<node> q1,q2,tmpq;
    node st,ed;
    st.num=tt;st.step=0;ed.num=des;ed.step=0;
    q1.push(st);q2.push(ed);
    vis[contor(tt)]=1;vis[contor(des)]=2;
    step[contor(tt)]=0;step[contor(des)]=0;
    while(!q1.empty() || !q2.empty() ){
        while(!q1.empty()){
            st=q1.front();
            q1.pop();
            toM(st.num);
            for(int i=0;i<3;i++) 
                for(int j=0;j<3;j++)if(matrix[i][j]==0){x=i;y=j;}
            for(int i=0;i<4;i++){
                nx=x+dx[i];
                ny=y+dy[i];
                if(inboard(nx,ny)){
                    swap(matrix[x][y],matrix[nx][ny]);
                    int nnum=toN();
                    temp=contor(nnum);
                    if(!vis[temp]){vis[temp]=1;step[temp]=step[contor(st.num)]+1;tmpq.push(node(nnum,st.step+1));
                    //cout<<nnum<<endl;
                    }
                    else if(vis[temp]==2){ans=step[temp]+1+step[contor(st.num)];cout<<ans;exit(0);}
                    swap(matrix[x][y],matrix[nx][ny]);
                }
            }
        }
        q1=tmpq;tmpq=queue<node>();
        //cout<<endl;
        while(!q2.empty()){
            st=q2.front();
            q2.pop();
            toM(st.num);
            for(int i=0;i<3;i++) 
                for(int j=0;j<3;j++)if(matrix[i][j]==0){x=i;y=j;}
            for(int i=0;i<4;i++){
                nx=x+dx[i];
                ny=y+dy[i];
                if(inboard(nx,ny)){
                    swap(matrix[x][y],matrix[nx][ny]);
                    int nnum=toN();temp=contor(nnum);
                    if(!vis[temp]){vis[temp]=2;step[temp]=step[contor(st.num)]+1;tmpq.push(node(nnum,st.step+1));
                    //cout<<nnum<<endl;
                    }
                    else if(vis[temp]==1){ans=step[temp]+1+step[contor(st.num)];cout<<ans;exit(0);}
                    swap(matrix[x][y],matrix[nx][ny]);
                }
            }
        }
        q2=tmpq;tmpq=queue<node>();
    }
    return 0;
}
//Bidirectional BFS
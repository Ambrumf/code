# 搜索(Medium)总结
## A.八数码难题
题目链接：https://www.luogu.com.cn/problem/P1379?contestId=40385

题解：这道题的思路讲过。核心思路是把每个状态转换成9位数的序列，再将序列康托展开哈希为1～9！的整数，从而能用一个362880的数组以$O(1)$的时间复杂度访问达到每个状态所用的步数。双向BFS暴力搜索即可得到答案。

反思：初版代码犯了两个错误，第一点是没有考虑起点和终点相同的情况，后来加入了if判断，将起点和终点相同作为特解。第二个错误调试了很久才发现，由于0在矩阵左上角时记录状态的整数为八位数，康托展开函数传入的字符串长度为8，计算阶乘时表达式错位导致结果出错。

<details>
<summary>代码</summary>

```cpp
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
```
</details>

***
## B.P1120 小木棍［数据加强版］
题目链接：https://www.luogu.com.cn/problem/P1120?contestId=40385

题解：IDA*,剪枝。搜索深度从1迭代加深。搜索思路是先将木棍从大到小排序，从最大的木棍开始选取，判断当前木棍是否可以用于拼接。如果可以拼接，将改木棍标记为已选取，当前长度加上木棍的长度，继续选取下一根可拼接的木棍。如果选取一根木棍后已拼接长度等于目标长度，则完成拼接的木棍数加一，按照同样流程尝试拼接下一个木棍。如果拼接失败，返回上层递归函数，将拼接的木棍恢复。

  优化1:搜索深度最大为总长度除以2，超过这个长度只能拼成一根木棍。并且无法整数总长度的值无需搜索。
  优化2:如果拼接失败回溯至上层函数时当前长度为零或剩余长度等于尝试拼接木棍的长度，继续回溯。因为前者情况下拼接失败说明所用的木棍无法在以拼接为0也就是最优的情况下成功拼接，必定被剩余。后者说明用更不灵活的长木棍无法完成所有木棍的拼接，那么即使使用更多的小木棍拼接也无法完成。

反思：做这道题时主要的困难点在于对如何模拟拼接和木棍还原木棍没有头绪。考虑的方向是用vector删除选取的木棍，再插入合并后的长度，完整复原合并和拆分的过程。发现很难实现。实际上已经合并的木棍只需要记录其个数，当前正在拼接的木棍也只需要用一个变量记录，木棍即使被合并也不需要删除，只需要用数组记录状态就可以表示。用这种表示方法可以很方便的实现合并木棍以及回溯到上个状态。

<details>
<summary>代码</summary>

```cpp
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int t,n=0,tmp,len,total,take[70];
vector<int> aa;
void dfs(int cnt,int sum,int pos){
    if(sum*len==total){printf("%d",len);exit(0);}
    if(cnt==len){dfs(0,sum+1,0);return;}
    if(len-cnt<aa.back())return;
    for(int i=pos;i<n;i++){
        if(!take[i] && aa[i]<=len-cnt){
            take[i]=1;
            dfs(cnt+aa[i],sum,i+1);
            take[i]=0;
            if(cnt==0 || cnt+aa[i]==len) return;
            while(aa[i]==aa[i+1])i++;
        }
    }
}
int main()
{
    scanf("%d",&t);
    while(t--){
        scanf("%d",&tmp);
        if(tmp<=50){n++;aa.push_back(tmp);}
    }
    sort(aa.rbegin(),aa.rend());
    total=accumulate(aa.begin(),aa.end(),0);
    for(len=aa[n-1];len<=total>>1;len++)if(total%len==0)dfs(0,0,0);
    //cout<<"!!";
    printf("%d",total);
    return 0;
}
```
</details>
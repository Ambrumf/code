# **题目描述**

有一个仅由数字0与1组成的 $n*n$ 格迷宫。若你位于一格$0$上，那么你可以移动到相邻$4$格中的某一格$1$上，同样若你位于一格1上，那么你可以移动到相邻$4$格中的某一格$0$上。

你的任务是：对于给定的迷宫，询问从某一格开始能移动到多少个格子（包含自身）。

# **输入格式**

第$1$行为两个正整数$n$,$m$。

下面$n$行，每行$n$个字符，字符只可能是$0$或者$1$，字符之间没有空格。

接下来$m$行，每行$2$个用空格分隔的正整数$i$,$j$，对应了迷宫中第ii行第jj列的一个格子，询问从这一格开始能移动到多少格。

# **输出格式**
$m$行，对于每个询问输出相应答案。

# **输入输出样例**

## **输入 #1 **
2 2  
01  
10  
1 1  
2 2  
## **输出 #1**
4  
4  

## **提示**
对于100% 的数据，$n≤1000,m≤100000$。

# **题解**

做这道题首先想到了BFS暴力搜索，但是n，m取最大值时计算次数显然超过了$10^9$，必定TLE。注意到可以互相访问的点之间会形成一个区块，区块中每一点可到达的格子数相等。于是想到采用记忆搜索加DFS，对输入的每一个坐标在二维矩阵中对应的点DFS，记录该坐标可以到达格子数，并用循环变量标记DFS过程中所有可访问的点，将结果记录在ans数组中。若求解的坐标已被标记，就可以直接从ans数组中获取已求解的值。

# **代码**
```cpp
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
```
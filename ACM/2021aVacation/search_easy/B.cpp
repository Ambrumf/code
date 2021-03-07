#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
#include <stdio.h>
#include <cstring>
#include <iomanip>
using namespace std;
typedef long long ll;
int aa[1000][1000],dir[8][2]={{-2,-1},{-2,1},{-1,2},{-1,-2},{1,2},{1,-2},{2,1},{2,-1}};
int n,m,x,y,cnt=0;
struct node{
    int x,y;
};
bool check(node a){
    if(a.x<m && a.x>=0 && a.y<n && a.y>=0 && aa[a.y][a.x]== -1)return 1;
    return 0;
}
int main()
{
    node start,next;
    queue<node> q;
    scanf("%d %d %d %d",&n,&m,&x,&y);
    x--;y--;
    swap(x,y);
    memset(aa,-1,sizeof(aa));
    aa[y][x]=0;
    start.x=x;start.y=y;q.push(start);
    while(!q.empty()){
        start=q.front();
        q.pop();
        for(int i=0;i<8;i++){
            next.x=start.x+dir[i][0];
            next.y=start.y+dir[i][1];
            if(check(next)){aa[next.y][next.x]=aa[start.y][start.x]+1;q.push(next);}
        }
    }
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++){cout<<setw(5)<<left<<aa[i][j];
            if(j==m-1)cout<<endl;}
        }
    return 0;
}

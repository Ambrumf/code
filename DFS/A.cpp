#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,cnt,dir[4];        
char aa[51][51];
bool inboard(int x,int y){
    if(x>=1 && x<=n && y>=1 &&y<=n)return 1;
    return 0;
}
void dfs(int x,int y){
    int tmp=0,l=0,r=0,d=0,u=0;
    while(inboard(x-l-1,y)){
        if(inboard(x-l-1,y+1) && aa[x-l-1][y+1]=='#')break;
        if(inboard(x-l-1,y-1) && aa[x-l-1][y-1]=='#')break;
        l++;q
    }
    while(inboard(x+r+1,y)){
        if(inboard(x+r-1,y+1) && aa[x-l-1][y+1]=='#')break;
        if(inboard(x+r-1,y-1) && aa[x-l-1][y-1]=='#')break;
        r++;
    }
    while(inboard(x,y-u-1)){
        if(inboard(x+1,y-u-1) && aa[x-l-1][y+1]=='#')break;
        if(inboard(x-1,y-u-1) && aa[x-l-1][y-1]=='#')break;
        u++;
    }
    while(inboard(x,y+d+1)){
        if(inboard(x+1,y+d+1) && aa[x-l-1][y+1]=='#')break;
        if(inboard(x-1,y+d+1) && aa[x-l-1][y-1]=='#')break;
        d++;
    }
    cout<<l<<' '<<r<<" "<<d<<" "<<u<<endl;
    if(l==r && r==d && d==u && u!=0)cnt++;
}
int main()
{
    int n;
    while(cin>>n){
        if(n==0)break;
        cnt=0;
        string t;
        for(int i=1;i<=n;i++){
            cin>>t;
            for(int j=1;j<=n;j++)aa[i][j]=t[j-1];
        }
        for(int i=1;i<=n;i++)for(int j=1;j<=n;j++){
            if(aa[i][j]=='#')dfs(i,j);
        }
        cout<<cnt<<endl;
    }
    return 0;
}
/*
4
oo#o          
o###
oo#o
oooo
4
oo#o          
o###
oo#o
oo#o
5
oo#oo
oo#oo          
#####
oo#oo
oo##o
6
ooo#oo
ooo##o          
o#####
ooo#oo
ooo#oo
oooooo
0
*/

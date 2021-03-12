#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,cnt,dir[4];        
char aa[51][51];
bool inboard(int x,int y){
    if(x>=1 && x<=n && y>=1 && y<=n)return 1;
    return 0;
}
void dfs(int x,int y){
    int tmp=0,l=0,r=0,d=0,u=0;
    //cout<<x<<' '<<y<<endl;
    while(inboard(x-l-1,y) && aa[x-l-1][y]=='#'){
        l++;
        //cout<<"!!"<<endl;
        if(inboard(x-l,y+1) && aa[x-l][y+1]=='#'){l--;break;}
        if(inboard(x-l,y-1) && aa[x-l][y-1]=='#'){l--;break;}
    }
    while(inboard(x+r+1,y) && aa[x+r+1][y]=='#'){
        r++;
        if(inboard(x+r,y+1) && aa[x+r][y+1]=='#'){r--;break;}
        if(inboard(x+r,y-1) && aa[x+r][y-1]=='#'){r--;break;}
    }
    while(inboard(x,y-u-1) && aa[x][y-u-1]=='#'){
        u++;
        if(inboard(x+1,y-u) && aa[x+1][y-u]=='#'){u--;break;}
        if(inboard(x-1,y-u) && aa[x-1][y-u]=='#'){u--;break;}
    }
    while(inboard(x,y+d+1) && aa[x][y+d+1]=='#'){
        d++;
        if(inboard(x+1,y+d) && aa[x+1][y+d]=='#'){d--;break;}
        if(inboard(x-1,y+d) && aa[x-1][y+d]=='#'){d--;break;}
    }
    //cout<<l<<' '<<r<<" "<<d<<" "<<u<<endl;
    if(l==r && r==d && d==u && u!=0)cnt++;
}
int main()
{
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
5
oo#oo 
o0#oo          
#####
oo#oo
oo#oo 
5
oo#oo
oo#oo          
#####
oo#oo
oo##o
6
ooo#oo
o#o#oo          
###o#o
o#o#oo
ooo#oo
oooooo
0
*/


//aa[x][j]=='#';
//n重复定义 ;(
//抄错代码 ;((
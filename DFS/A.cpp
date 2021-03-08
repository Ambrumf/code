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
    while(inboard())
}
int main()
{
    int n;
    while(cin>>n){
        cnt=0;
        string t;
        for(int i=1;i<=n;i++){
            cin>>t;
            for(int j=1;j<=n;j++)aa[i][j]=t[j-1];
        }
        for(int i=1;i<=n;i++)for(int j=1;j<=n;j++){
            if(aa[i][j]=="#")dfs(i,j);
        }
    }
    return 0;
}

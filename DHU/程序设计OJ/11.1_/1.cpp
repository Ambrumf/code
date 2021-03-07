#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int cnt,maxdeep,m,n;
void dfs(int ctm,int ctn,int deep){
    if(deep==maxdeep){cnt++;return;}
    if(ctm<m)dfs(ctm+1,ctn,deep+1);
    if(ctn<n && ctn<ctm)dfs(ctm,ctn+1,deep+1);
}
int main()
{
    scanf("%d %d",&m,&n);
    maxdeep=m+n;
    dfs(0,0,0);
    cout<<cnt;
    return 0;
}

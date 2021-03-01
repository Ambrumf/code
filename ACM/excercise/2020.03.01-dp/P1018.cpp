#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
#include <stdio.h>
#include <cstring>
using namespace std;
typedef long long ll;
int aa[50];
char s[50];

struct node{
    bool exist=true;
    int v,c[50]={};
}dp[50][9],ans[50];


node num(int l,int r){
    node e;
    e.v=r-l+1;
    for(int i=1;i<=e.v;i++)e.c[i]=aa[r-i+1];
    return e;
}

node mul(node a,node b){
    node e;
    e.v=a.v+b.v-1;
    for(int i=1;i<=a.v;i++)
        for(int j=1;j<=b.v;j++)e.c[i+j-1]+=a.c[i]*b.c[i];
    int p=0;
    for(int i=1;i<=e.v;i++){
        e.c[i]+=p;
        p=e.c[i]/10;
        e.c[i]%=10;
    }
    while(p>0){
        e.c[++e.v]=p%10;
        p/=10;
    }
    return e;
}
node Max(node a,node b){
    if(!a.exist || a.v<b.v)return b;
    if(!b.exist || b.v<a.v)return a;
    for(int i=a.v;i>=1;i--){
        if(a.c[i]<b.c[i])return b;
        else return a;
    }
    return a;
}

int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i=1;i<=n;i++)aa[i]=s[i-1]-'0';
    for(int i=1;i<=n;i++)for(int j=1;j<=k;k++)dp[i][j].exist=false;
    for(int i=1;i<n;i++)dp[i][1]=num(1,i);
    // for(int i=2;i<=k;i++)
    //     for(int l=i;l<n;l++)
    //         for(int j=i-1;j<l;j++)if(dp[j][i].exist)dp[l][i]=Max(dp[l][i],mul(dp[j][i],num(j+1,l)));
    for(int i=1;i<n;i++){
        dp[i][1]=num(1,i);
        for(int j=2;j<=k;j++){
            for(int fr=j-1;fr<i;fr++){
                if(dp[fr][j-1].exist)dp[i][j]=Max(dp[i][j],mul(dp[fr][j-1],num(fr+1,i)));
            }
        }
    }
    cout<<"!!";
    node ans;
    for(int i=k;i<n;i++){
        ans=Max(dp[i][k],ans);
    }
    for(int i=ans.v;i>=1;i--)cout<<ans.c[i];
    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int aa[100005]={},up[100005],down[100005];
int n,flag=0,mx=-1e9;
int main()
{
    int ans=0,maxup=-1e9,maxdown=-1e9;
    cin>>n;
    for(int i=1;i<=n;i++){scanf("%d",&aa[i]);up[i]=down[i]=1;}
    for(int i=2;i<=n;i++){
        if(aa[i]>aa[i-1])up[i]=up[i-1]+1;
        if(up[i]==mx)flag=1;
        if(up[i]>mx){mx=up[i];flag=0;}
    }
    for(int i=n-1;i>=1;i--){
        if(aa[i]>aa[i+1])down[i]=down[i+1]+1;
        if(down[i]==mx)flag=1;
        if(down[i]==mx){flag=0;mx=down[i];}
    }
    if(flag==1){cout<<0;return 0;}
    for(int i=1;i<=n;i++){
        if(down[i]!=1 && up[i]!=1){
            int t=min(down[i],up[i]);
            if(t%2==1 && down[i]==up[i]){
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}

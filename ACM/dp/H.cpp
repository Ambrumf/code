#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,aa[300];
int main()
{
    int mmax=-1e6,up[300]={},down[300]={};
    cin>>n;
    up[0]=down[n+1]=0;
    for(int i=1;i<=n;i++)cin>>aa[i];
    for(int i=1;i<=n;i++)for(int j=0;j<i;j++)if(aa[i]>aa[j])up[i]=max(up[i],up[j]+1);
    for(int i=n;i>=1;i--)for(int j=n;j>i;j--)if(aa[i]>aa[j])down[i]=max(down[i],down[j]+1);
    for(int i=1;i<=n;i++)mmax=max(mmax,up[i]+down[i]);
    cout<<n-mmax;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,ans=0;
int m[8][8],takeb[8],takew[8],colb[8]={},colw[8]={},ulinew[15]={},dlinew[15]={},ulineb[15]={},dlineb[15]={};
void f(int k)
{
    if(k==n){ans++;return;}
    for(int i=0;i<n;i++)if(m[i][k]==1 && colw[i]==0 && ulinew[k+i]==0 && dlinew[n-k+i]==0)
    {
        m[i][k]=0;
        colw[i]=ulinew[k+i]=dlinew[n-k+i]=1;
        f(k+1);
        m[i][k]=1;   
        colw[i]=ulinew[k+i]=dlinew[n-k+i]=0;
    }
}
void fun(int k)
{
    if(k==n)f(0);
    for(int i=0;i<n;i++)if(m[i][k]==1 && colb[i]==0 && ulineb[k+i]==0 && dlineb[n-k+i]==0)
    {
        m[i][k]=0;
        colb[i]=ulineb[k+i]=dlineb[n-k+i]=1;
        takeb[k]=i;
        fun(k+1);
        m[i][k]=1;
        colb[i]=ulineb[k+i]=dlineb[n-k+i]=0;
    }
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)cin>>m[i][j];
    fun(0);
    cout<<ans;
    return 0;
}

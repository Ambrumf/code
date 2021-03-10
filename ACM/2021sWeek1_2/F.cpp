#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll prime[5005]={};
bool notprime[10005]={};
int k=0;
ll e[5005]={};
void fun(ll t,ll x){
    for(int i=1;i<=k && t!=1;i++){
        while(t%prime[i]==0){
            t/=prime[i];
            e[i]+=x;
        }
    }
}

int main()
{
    for(int i=2;i<=10000;i++){
        if(!notprime[i])prime[++k]=i;
        for(int j=1;j<=k && prime[j]*i<=10000;j++){
            notprime[i*prime[j]]=1;
            if(i%prime[k]==0)break;
        }
    }
    int p,q,r,s;
    while(cin>>p>>q>>r>>s){
        memset(e,0,sizeof(e));
        for(int i=1;i<=p;i++)fun(i,1);
        for(int i=1;i<=p-q;i++)fun(i,-1);
        for(int i=1;i<=q;i++)fun(i,-1);
        for(int i=1;i<=r;i++)fun(i,-1);
        for(int i=1;i<=r-s;i++)fun(i,1);
        for(int i=1;i<=s;i++)fun(i,1);
        //for(int i=1;i<=k;i++)if(e[i]!=0)cout<<"i:"<<i<<' '<<e[i]<<endl;
        double ans=1;
        for(int i=1;i<=k;i++){
                if(e[i]>0){
                    int s=e[i];
                    while(s--)ans*=prime[i];
                }
                if(e[i]<0){
                    int s=-e[i];
                    while(s--)ans/=prime[i];
                }
        }
        printf("%.5lf\n",ans);
    }
    return 0;
}
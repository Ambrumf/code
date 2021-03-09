#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int lprime[1300005]={},rprime[1300005]={};
bool notprime[1300005]={};
int prime[1100050]={};
int main()
{
    int k=0;
    for(int i=2;i<=1300000;i++){
        if(!notprime[i])prime[++k]=i;
        for(int j=1;j<=k && (ll)prime[j]*i<=1300000;j++){
            notprime[i*prime[j]]=1;
            if(i%prime[j]==0)break;
        }
    }
    int l=1,r=k;
    for(int i=2;i<=prime[k];i++){
        if(i==prime[l]){rprime[i]=i;l++;}
        else rprime[i]=prime[l];
    }
    for(int i=prime[k];i>=2;i--){
        if(i==prime[r]){lprime[i]=i;r--;}
        else lprime[i]=prime[r];
    }
    int n;
    while(scanf("%d",&n)){
        if(n==0)break;
        printf("%d\n",rprime[n]-lprime[n]);
    }
    return 0;
}

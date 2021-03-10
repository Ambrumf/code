#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=10005;
int prime[N];
bool notprime[N];
int k=0;
int ans[100005]={};
int main()
{
    for(int i=2;i<=10000;i++){
        if(!notprime[i])prime[++k]=i;
        for(int j=1;j<=k && prime[j]*i<=10000;j++){
            notprime[prime[j]*i]=1;
            if(i%prime[j]==0)break;
        }
    }
    for(int len=1;len<=k;len++){
        for(int i=1;i<=k-len+1;i++){
            int sum=0;
            for(int j=i;j<i+len;j++)sum+=prime[j];
            if(sum<=10000)ans[sum]++;
        }
    }
    int n;
    while(scanf("%d",&n)){
        if(n==0)break;
        printf("%d\n",ans[n]);
    }
    return 0;
}

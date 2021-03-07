#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=100000010;
int prime[60000100];
bool aa[N];
int main()
{
    int n,primenum=1,tmp,q;
    scanf("%d %d",&n,&q);
    for(int i=2;i<N;i++){
        if(!aa[i])prime[primenum++]=i;
        for(int j=1;j<primenum && i*prime[j]<N;j++){
            aa[i*prime[j]]=1;
            if(i%prime[j]==0)break;
        }
    }
    while(q--){
        scanf("%d",&tmp);
        printf("%d\n",prime[tmp]);
    }
    return 0;
}
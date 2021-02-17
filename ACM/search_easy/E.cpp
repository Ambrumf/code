#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX=5000002;
const int SQMAX=9000;
int n,k,aa[21],ans=0;
int num[MAX]={};
bool isfac(int num ){
    int s=sqrt(num);
    for(int i=2;i<=s;i++)if(num%i==0)return 0;
    return 1;
}
void dfs(int pos , int sum , int cnt){

    if(cnt==k ){
        if(isfac(sum)){ans++;}
        return;
    }
    if(pos==n)return;
    sum+=aa[pos];
    dfs(pos+1,sum,cnt+1);
    sum-=aa[pos];
    dfs(pos+1,sum,cnt);
}
int main()
{
    //for(int i=2;i<MAX;i++)num[i]=i;
    //for(int i=2;i<=SQMAX;i++)
    //    if(num[i])for(int j=i+i;j<MAX;j+=i)num[j]=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)scanf("%d",aa+i);
    dfs(0,0,0);
    printf("%d",ans);
    return 0;
}

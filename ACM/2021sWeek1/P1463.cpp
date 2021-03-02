#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;
int ans=-1e9,mx=-1e9,n;
int prime[12]={2,3,5,7,11,13,17,19,23,29,31,37},aa[13]={};
void dfs(int pri,int sum,int acum,int mx){
    if(pri==12)return;
    int j=0;
    while(sum<N && j<mx){
        sum*=prime[pri];
        j++;
        dfs(pri+1,sum,acum*(1+j),j);
    }
    if(ans<1){};
}
int main()
{
    cin>>n;
    if(n==1){cout<<1;return 0;}
    dfs(0,1,1,9999);
    cout<<ans;
    return 0;
}
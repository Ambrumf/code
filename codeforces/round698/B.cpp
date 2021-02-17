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
void solve(){
    int dp[200]={};
    int q,d,k,tmp;
    vector<int> v;
    scanf("%d %d",&q,&d);
    k=10*d+9;
    dp[0]=1;
    for(int i=d;i<=k;i+=10)v.push_back(i);
    for(int i=1;i<=k;i++){
        for(auto x:v)if(i-x>=0 && dp[i-x])dp[i]=1;
    }
    //for(int i=1;i<=k;i++)cout<<i<<' '<<dp[i]<<endl;
    while(q--){
        scanf("%d",&tmp);
        if(tmp>k){printf("YES\n");}
        else if(dp[tmp]){printf("YES\n");}
        else {printf("NO\n");}
    }
    
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)solve();
    return 0;
}

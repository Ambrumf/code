#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;

int main()
{
    int a,b,k,n,vis[400005];
    cin>>a>>b;
    n=a+b-1;
    queue<int> q;
    int t=0;
    while(k){
        if(k%2==1)q.push(t);
        k/=2;
        t++;
    }
    while(!q.empty()){
        
    }
    return 0;
}

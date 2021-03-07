#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node{
    int cnt,deep;
    bool operator < (const node &b) const{
        return cnt-deep>b.cnt-b.deep;
    }
}nd[200005];
vector<int> V[200005];
int vis[200005]={};
int dfs(int pos, int pa){
    vis[pos]=1;
    nd[pos].deep=nd[pa].deep+1;
    for(auto x:V[pos]){
        if(!vis[x])nd[pos].cnt+=dfs(x,pos);
    }
    return nd[pos].cnt+1;
}
int main()
{
    int n,k;
    ll ans=0;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n-1;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        V[a].push_back(b);
        V[b].push_back(a);
    }
    nd[0].deep=-1;
    dfs(1,0);
    sort(nd+1,nd+1+n);
    for(int i=1;i<=n-k;i++)ans+=nd[i].cnt-nd[i].deep;
    cout<<ans;
    return 0;
}

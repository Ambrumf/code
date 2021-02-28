#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;

int main()
{
    ll v,n,aa[40],dp[40],vis[20005]={};
    vector<ll> vll;
    cin>>v>>n;
    for(int i=1;i<=n;i++){
        cin>>aa[i];
        for(auto x:vll)if(x+aa[i]<=v && !vis[x+aa[i]]){vll.push_back(x+aa[i]);vis[x+aa[i]]=1;}
        if(aa[i]<=v && !vis[aa[i]]){vll.push_back(aa[i]);vis[aa[i]]=1;}
    }
    sort(vll.begin(),vll.end());
    cout<<v-vll.back();
    return 0;
}

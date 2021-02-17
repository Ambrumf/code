#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n,a,b;
    cin>>n>>a>>b;
    string t;
    cin>>t;
    int aa[200005];
    for(int i=0;i<t.size();i++)if(t[i]=='1'){aa[i]=1;aa[i+1]=1;}
    if(a>b){
        int l,r;
        for(int i=0;i<t.size();i++)if(t[i]=='1')
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}

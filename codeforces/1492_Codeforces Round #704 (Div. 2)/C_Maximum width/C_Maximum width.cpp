#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;
vector<ll> vll1,vll2;
int main()
{
    ll n,m;
    cin>>n>>m;
    string a,b;
    vll1.resize(m);
    vll2.resize(m);
    cin>>a>>b;
    int j=0;
    for(int i=0;i<m;i++){
        while(a[j]!=b[i])j++;
        vll1[i]=j;
        j++;
    }
    j=n-1;
    for(int i=m-1;i>=0;i--){
        while(a[j]!=b[i])j--;
        vll2[i]=j;
        j--;
    }
    ll ans=-1e9;
    for(int i=0;i<m-1;i++){
        ans=max(ans,vll2[i+1]-vll1[i]);
    }
    cout<<ans;
    return 0;
}

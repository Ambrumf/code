#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll aa[500000],ans,n,q,k,l,r;
    ll sum[500000];
    cin>>n>>q>>k;
    for(int i=1;i<=n;i++)cin>>aa[i];
    while(q--){
        cin>>l>>r;
        ans=0;
        ans+=(aa[l]-1)+(k-aa[r]);
        ans+=2*((aa[r]-aa[l]+1)-(r-l+1));
        cout<<ans<<endl;
    }
    return 0;
}

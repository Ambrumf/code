#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t,A,B,k,ans;
    cin>>t;
    while(t--){
        ans=0;
        scanf("%lld %lld %lld",&A,&B,&k);
        vector<ll> a(A+1),b(B+1);
        vector<pair<ll,ll> > v(k);
        for(int i=0;i<v.size();i++){
            scanf("%lld",&v[i].first);
            a[v[i].first]++;}
        for(int i=0;i<v.size();i++){
            scanf("%lld",&v[i].second);
            b[v[i].second]++;}
        for(int i=0;i<v.size();i++){
            ans+=k-a[v[i].first]-b[v[i].second]+1;
        }
        cout<<ans/2<<endl;
    }
    return 0;

}

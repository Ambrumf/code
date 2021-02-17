#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n,k,aa[1005],ans[1005]={},j=1;
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>aa[i];
    vector<pair<pair<ll,ll>,ll> > v;
    int flag=1;
    while(flag){
        flag=0;
        for(int i=0;i<n-1;i++)if(aa[i]<aa[i+1]){
            ll gap=aa[i+1]-aa[i];
            v.push_back(make_pair(make_pair(j,j+gap-1),i+1));
            j+=gap;
            aa[i]=aa[i+1];
            flag=1;
            break;
        }
    }
    //for(auto x:v)cout<<x.first.first<<' '<<x.first.second<<':'<<x.second<<endl;
    //cout<<v.size()<<endl;
    //cout<<j<<endl;
    if(k<j && k<200000){for(int i=0;i<v.size();i++)if(v[i].first.first<=k &&v[i].first.second>=k)cout<<v[i].second<<endl;}
    else cout<<-1<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}

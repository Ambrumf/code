#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solution(){
    ll n,m,tmp,asum=0,bsum=0,l,r,ans=1e9;
    cin>>n>>m;
    vector<ll> v,a,b;
    for(int i=0;i<n;i++){
        cin>>tmp;
        v.push_back(tmp);   
    }
    for(int i=0;i<n;i++){
        cin>>tmp;
        if(tmp==1)a.push_back(v[i]);
        else b.push_back(v[i]);
    }
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    for(int i=0;i<b.size();i++)bsum+=b[i];
    r=b.size();
    for(l=0;l<=a.size();l++){
        while(r>0 && asum+bsum-b[r-1]>=m){
            r--;
            bsum-=b[r];
        }   
        if( asum+bsum>=m)ans=min(ans,2*r+l);
        if(l!=a.size())asum+=a[l];
    }
    if(ans==1e9)cout<<-1<<endl;
    else cout<<ans<<endl;
}
int main()
{
    int t;          
    cin>>t;
    while(t--)solution();
    return 0;
}

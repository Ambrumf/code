#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(ll a,ll k,ll n){
    ll mmin=n+a-1,mmax=a*n;
    if(mmin%k==0 || mmax%k==0)return 1;
    else if(mmax/k !=mmin/k)return 1;
    return 0;
}
void solve(){
    ll n,k;
    cin>>n>>k;
    ll l=1,r=k,mid;
    while(r-l>0){
        mid=l+(r-l)/2;
        if(check(mid,k,n))r=mid;
        else l=mid+1;
    }
    cout<<l<<endl;
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)solve();
    return 0;
}

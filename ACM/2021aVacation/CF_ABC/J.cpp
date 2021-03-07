#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n,l,r;
    scanf("%lld %lld %lld",&n,&l,&r);
    ll aa[21];
    aa[1]=1;
    for(int i=2;i<21;i++)aa[i]=2*aa[i-1];
    ll mmin,mmax,sum=0;
    for(int i=1;i<=l;i++)sum+=aa[i];
    mmin=sum+n-l;
    sum=0;
    for(int i=1;i<=r;i++)sum+=aa[i];
    mmax=sum+(n-r)*aa[r];
    cout<<mmin<<' '<<mmax;
}
int main()
{
    solve();
    return 0;
}

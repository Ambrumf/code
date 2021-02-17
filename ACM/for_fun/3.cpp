#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll aa[1000000],bb[1000000];
int main()
{
    ll n,k,sum=0,mmax=0;
    scanf("%lld %lld",&n,&k);
    n--;
    for(int i=0;i<n;i++){
        scanf("%lld",&aa[i]);
        sum+=aa[i];
    }
    bb[0]=aa[0];
    for(int i=1;i<n;i++)bb[i]=bb[i-1]+aa[i];
    if(k>=n){cout<<0;return 0;}
    else {
        for(int i=0;i<n-k;i++){
            mmax=max(mmax,bb[i+k]-bb[i]);
        }
        cout<<sum-mmax;
    }
    return 0;
}

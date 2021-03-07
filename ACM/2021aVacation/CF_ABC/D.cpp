#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n,x,d=-1e9,k=-1e9;

    scanf("%lld %lld",&n,&x);
    while(n--){
        ll a,b;
        scanf("%lld %lld",&a,&b);
        k=max(k,a-b);
        d=max(d,a);
    }
    ll ans;
    x-=d;
    if(x<=0)ans=1;
    else if(k>0){
        ans=x/k+2;
        if(x%k==0)ans--;
    }
    else ans=-1;
    cout<<ans<<endl;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}
/*
3
3 10
6 3
8 2
1 4
4 10
4 1
3 2
2 6
1 100
2 15
10 11
14 100
Output
2
3
-1*/
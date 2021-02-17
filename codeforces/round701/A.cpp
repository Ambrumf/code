#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fun(ll a,ll b){
    ll cnt=0;
    if(b==1)return 100000000;
    while(a){
        a/=b;
        cnt++;
    }
    return cnt;
}
void solve(){
    ll a,b,ans=0;
    cin>>a>>b;
    int t1,t2;
    t1=fun(a,b);
    t2=fun(a,b+1)+1;
    while(1){
        t1=fun(a,b);
        t2=fun(a,b+1)+1;
        if(t1==t2 || t1<t2)break;
        ans++;
        b++;
    }
    cout<<fun(50000000,4)<<endl<<fun(50000000,5)<<endl;
    //cout<<ans<<' '<<t1<<' '<<t2<<endl;
    if(t1==t2)cout<<t1+ans<<endl;
    if(t1<t2)cout<<t1+ans<<endl;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}

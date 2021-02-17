#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mmin=1e9;
void fun(ll a,ll b,ll sum){
    if(b==1 || sum>mmin )return;
    if(a==0){mmin=min(sum,mmin);return;}
    fun(a/b,b,sum+1);
    fun(a,b+1,sum+1);
}
void solve(){
    ll a,b;
    mmin=1e9;
    cin>>a>>b;
    fun(a,b,0);
    fun(a,b+1,1);
    cout<<mmin<<endl;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}

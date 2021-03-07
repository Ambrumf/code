#include <iostream>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;

void solve(){
    ll a,b;
    cin>>a>>b;
    ll cnt=0;
    for(ll i=b;i*i<a;i++){
        if(a%i==0)cnt++;
    }
    cout<<cnt<<endl;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}

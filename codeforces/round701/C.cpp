#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll a,b,sum=0;
    cin>>a>>b;
    for(int k=1;k<sqrt(a);k++)sum+=max(0ll,min(b,(a-k)/k)-(k+1)+1);
    cout<<sum<<endl;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    string t;
    cin>>t;
    int n=t.size();
    if(n==1)cout<<0<<endl;
    else {
        int flag=0;
        for(int i=1;i<t.size();i++)if(t[i]=='1')flag=1;
        if(flag && n%2==1)cout<<n/2+1<<endl;
        else cout<<n/2<<endl;
    }  
}
int main()
{
    solve();
    return 0;
}

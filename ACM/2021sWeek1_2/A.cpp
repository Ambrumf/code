#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    string a;
    ll b;
    cin>>a>>b;
    if(b<0)b=-b;
    if(a[0]=='-')a.erase(a.begin());
    ll k=0;
    for(int i=0;i<a.size();i++){
        k=k*10+a[i]-'0';
        k%=b;
    }
    if(k)cout<<"not divisible";
    else cout<<"divisible";
    cout<<endl;
}
int main()
{
    int T;
    scanf("%d",&T);
    for(int j=1;j<=T;j++){cout<<"Case "<<j<<": ";solve();}
    return 0;
}

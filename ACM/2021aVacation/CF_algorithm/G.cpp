#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n,m;
    cin>>n>>m;
    int k=n-m;
    int aa[100001];
    for(int i=1;i<=m;++i)aa[i]=i;
    for(int i=m-k;i<=m;i++)aa[i]=2*m-k-i;
    for(int i=1;i<=m;++i){printf("%d",aa[i]);if(i!=n)printf(" ");}
    cout<<'\n';
}
int main(){
    int t;
    cin>>t;
    while(t--)solve();
}
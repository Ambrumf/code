#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    char cc[200005]={};
    cc[0]='9';cc[1]='8';
    int n;      
    cin>>n;
    for(int i=2;i<n;i++)cc[i]='0'+(i-2+9)%10;
    if(n==1)cout<<9<<endl;
    else cout<<cc<<endl;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}

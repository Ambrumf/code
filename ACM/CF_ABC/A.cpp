#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int x,m,n;
    cin>>x>>n>>m;
    int t1=x/2+10;
    while(t1<x && n){
        n--;
        x=t1;
        t1=x/2+10;
    }
    if(x<=m*10)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}
/*
Input
7
100 3 4
189 3 4
64 2 3
63 2 3
30 27 7
10 9 1
69117 21 2
Output
YES
NO
NO
YES
YES
YES
YES
*/
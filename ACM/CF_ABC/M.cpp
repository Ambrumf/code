#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n,m,k,aa[105];
    cin>>n>>m>>k;
    for(int i=0;i<n;i++)cin>>aa[i];
    int pos=0;
    while(pos!=n-1){
        if(aa[pos]+m+k<aa[pos+1])break;
        else m+=min(aa[pos],aa[pos]+k-aa[pos+1]);
        pos++;
    }
    if(pos==n-1)cout<<"yes"<<endl;
    else cout<<"no"<<endl;
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
5
3 0 1
4 3 5
3 1 2
1 4 7
4 10 0
10 20 10 20
2 5 5
0 11
1 9 9
99
Output
YES
NO
YES
NO
YES
*/

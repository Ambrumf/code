#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;
bool binary(ll b,ll x){
    ll l=1,r=b,mid,sum;
    while(l<=r){
        mid=(l+r)/2;
        sum=mid*mid*mid+b*b*b;
        if(sum==x)break;
        if(sum<x)l=mid+1;
        else r=mid-1;
    }
    if(sum==x)return 1;
    return 0;
}

void solve(){
    ll x;
    cin>>x;
    ll a,b;
    ll l=1,r=b,mid;
    for(ll b=1;b<10005;b++){
        if(binary(b,x)){cout<<"YES"<<endl;return;}
    }
    cout<<"NO"<<endl;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}
/*
inputCopy
7
1
2
4
34
35
16
703657519796
outputCopy
NO
YES
NO
NO
YES
YES
YES
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//merge sort
const int N=500000;
ll cnt=0,aa[N],t[N];
void msort(ll llow,ll lhigh,ll rlow,ll rhigh){
    ll n=lhigh-llow+1;
    ll p=llow,q=rlow,i=llow;
    while(p<=lhigh && q<=rhigh){
        if(aa[p]<=aa[q]){t[i++]=aa[p++];n--;}
        else{cnt+=n;t[i++]=aa[q++];}//判重
    }
    while(p<=lhigh)t[i++]=aa[p++];
    while(q<=rhigh)t[i++]=aa[q++];
    i=p=llow;
    while(p<=rhigh)aa[p++]=t[i++];
}
void mergesort(ll l,ll r){
    if(l==r)return;
    ll mid=l+(r-l)/2;
    mergesort(l,mid);
    mergesort(mid+1,r);
    msort(l,mid,mid+1,r);
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>aa[i];
    mergesort(0,n-1);
    cout<<cnt;
    return 0;
}

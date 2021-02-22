#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;
ll gcd(ll a,ll b){
    if(a<b)swap(a,b);
    return b?gcd(b,a%b):a;
}
double lcm(ll a,ll b){
    if(a<b)swap(a,b);
    return (double)a/gcd(a,b)*b;
} 
int main()
{
    ll n,m,p,a,b;
    cin>>n>>m>>p;
    ll num=gcd(n,m);
    a=n/num;b=m/num;
    ll x1,y1,x2,y2;
    while(p--){
    cin>>x1>>y1>>x2>>y2;
    y1--;y2--;
    ll p1,p2;
    if(x1==1)p1=(y1/a);
    else p1=(y1/b);
    if(x2==1)p2=(y2/a);
    else p2=(y2/b);
    //cout<<p1<<' '<<p2<<endl;
    if(p1==p2)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}
/*
Input
4 6 3
1 1 2 3
2 6 1 2
2 6 2 4
Output
YES
NO
YES
*/

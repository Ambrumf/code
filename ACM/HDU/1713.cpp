#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
#include <stdio.h>
#include <cstring>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b){
    if(a<b)swap(a,b);
    return b==0?a:gcd(b,a%b);
}
ll lcm(ll a,ll b){
    if(a<b)swap(a,b);
    return a/gcd(a,b)*b;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll a1,a2,b1,b2;
        scanf("%lld/%lld",&a1,&a2);
        scanf("%lld/%lld",&b1,&b2);
        ll k=lcm(a2,b2);
        ll a=k/a2*a1,b=k/b2*b1;
    }
    return 0;
}

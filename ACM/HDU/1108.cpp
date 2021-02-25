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
    ll a,b;
    while(cin>>a>>b){
    cout<<lcm(a,b)<<endl;        
    }
    return 0;
}

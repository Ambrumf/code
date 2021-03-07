#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
#include <stdio.h>
#include <cstring>
#include <cmath>
using namespace std;
typedef long long ll;
ll Pow(ll a,ll b ){
    ll sum=1;
    while(b--){
        sum*=a;
    }
    return sum;
}
ll fun(ll x,ll y,ll z){return Pow(x,z)+Pow(y,z)+x*y*z;}
bool biosearch(ll y,ll z,ll k){
    ll l=1,r=y-1,x,total;
    while(l<=r){
        x=(l+r)/2;
        total=fun(x,y,z);
        if(total==k)return true;
        else if(total>k)r=x-1;
        else l=x+1; 
    }
    return false;
}
int main(){
    //cout<<biosearch(2,3,53);
    int k;
    while(scanf("%d",&k),k){
        int cnt=0;
        for(ll y=1;y<50000;y++)
            for(ll z=2;z<=32&&Pow(y,z)<k;z++)
                if(biosearch(y,z,k))cnt++;
        printf("%d\n",cnt);
    }
    return 0;
}
//解题思路参考https://blog.csdn.net/zsc2014030403015/article/details/48443669
//闭区间版二分
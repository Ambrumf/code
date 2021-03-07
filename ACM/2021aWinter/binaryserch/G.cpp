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
bool check(int step,vector<ll> v,int m){
    int last=0;
    for(int i=1;i<v.size();i++){
        if(v[i]-v[i-1]>m)return false;
        if(v[i]-last>m){
            step--;
            last=v[i-1];
            if(step<=0)return false;
        }
    }
    return true;
}

int main()
{
    int L,n,m,tmp,now;
    while(cin>>L>>n>>m){
        vector<ll> v;
        v.push_back(L);
        v.push_back(0);
        for(int i=0;i<n;i++){
            scanf("%d",&tmp);
            v.push_back(tmp);
        }
        sort(v.begin(),v.end());
        ll l=1,r=L,mid;
        while(l<r){
            mid=(l+r)/2;
            if(check(m,v,mid))r=mid;
            else l=mid+1;
        }
        cout<<l<<endl;
    }
    return 0;
}
//检查答案方法参考https://www.cnblogs.com/handsomecui/p/5523042.html
//改用scanf
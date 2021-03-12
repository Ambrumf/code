#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int cnt[3000000]={};
int prime[2000000]={};
bool notprime[3000000]={};
int fun(int x){
    for(int i=2;i*i<=x;i++){
        if(x%i==0)return x/i;
    }
    return -1;
}
int main()
{
    int k=0;
    vector<int> p,h,ans;
    for(int i=2;i<=2750131;i++){
        if(!notprime[i])prime[++k]=i;
        for(int j=1;j<=k && prime[j]*i<=2750131;j++){
            notprime[prime[j]*i]=1;
            if(i%prime[j]==0)break;
        }
    }
    int n;
    cin>>n;
    for(int i=1;i<=2*n;i++){
        int tmp;
        scanf("%d",&tmp);
        cnt[tmp]++;
        if(notprime[tmp])h.push_back(tmp);
        else p.push_back(tmp);
    }
    sort(h.rbegin(),h.rend());
    sort(p.begin(),p.end());
    for(int i=0;i<h.size();i++){
        while(cnt[h[i]]){ans.push_back(h[i]);cnt[h[i]]--;cnt[fun(h[i])]--;}
    }
    for(int i=0;i<p.size();i++){
        while(cnt[p[i]]){ans.push_back(p[i]);cnt[p[i]]--;cnt[prime[p[i]]]--;}
    }
    for(auto x:ans)printf("%d ",x);
    return 0;
}

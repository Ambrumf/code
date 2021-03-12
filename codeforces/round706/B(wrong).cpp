#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    map<ll,ll> m;
    ll n,k,cnt,mx=-1e9;
    vector<ll> v;
    scanf("%lld %lld",&n,&k);
    for(int i=0;i<n;i++){
        ll t;
        scanf("%lld",&t);
        mx=max(mx,t);
        m[t]=1;
    }
    ll i=0;
    while(k--){
        while(m[i] && m[i+1] && i!=mx)i++;
        //cout<<i+1<<' '<<mx<<endl;
        if(i==mx){n+=k+1;break;}
        ll tmp=(i+1+mx-1)/2+1;
        //cout<<tmp<<endl;
        if(m[tmp])break;
        else {
            n++;
            m[tmp]=1;
            mx=max(mx,tmp);
        }
        
    }
    printf("%lld\n",n);
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)solve();
    return 0;
}

/*
5
4 1
0 1 3 4
3 1
0 1 4
3 0
0 1 4
3 2
0 1 2
3 2
1 2 3
outputCopy
4
4
3
5
3
*/
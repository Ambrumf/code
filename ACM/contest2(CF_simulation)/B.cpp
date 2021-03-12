#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n;
    scanf("%d",&n);
    ll a2=0,a1=0,tmp,cnt=0;
    for(int i=0;i<n;i++){
        scanf("%lld",&tmp);
        if(tmp%3==0)cnt++;
        if(tmp%3==2)a2++;
        if(tmp%3==1)a1++;
    }
    cnt+=min(a2,a1)+(a1-min(a2,a1))/3+(a2-min(a2,a1))/3;
    printf("%lld\n",cnt);
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)solve();
    return 0;
}

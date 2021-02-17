#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        ll k,flag=0;
        scanf("%lld",&k);
        if(k==1 || 0==(k&(k-1)))printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}

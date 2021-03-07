#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll aa[3000001];
int main(){
    ll n,k;
    scanf("%lld %lld",&n,&k);
    aa[1]=1;
    for(int i=2;i<=n;i++)aa[i]=(k-k/i)*aa[k%i]%k;
    for(int i=1;i<=n;i++)printf("%lld\n",aa[i]);
    return 0;
}

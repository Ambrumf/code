#include <bits/stdc++.h>
using namespace std;
long long f(long long n,long long k)
{
    if(k==0 || n==k) return 1;
    else return f(n-1,k)+f(n-1,k-1);
}
int main()
{
    long long k,n;
    cin>>k>>n;
    long long ans=f(n,k);
    cout<<ans<<endl;
    return 0;
}
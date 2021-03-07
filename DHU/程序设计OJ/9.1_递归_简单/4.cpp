#include <bits/stdc++.h>
using namespace std;
int sum=0;
long long fun(long long n)
{
    sum++;
    if(n<=1)return n;
    else return fun(n-1)+fun(n-2);
}
int main()
{
    long long N;
    cin>>N;
    long long ans=fun(N);
    cout<<ans<<' '<<sum;
}
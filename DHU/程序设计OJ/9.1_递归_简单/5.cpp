#include <bits/stdc++.h>
using namespace std;
int sum=0;
long long fac(long long n)
{
    if(n==0) return 1;
    else return n*fac(n-1);
}
int main()
{
    long long N;
    while(cin>>N){
    long long ans=fac(N);
    cout<<ans<<endl;
    }
    return 0;
}
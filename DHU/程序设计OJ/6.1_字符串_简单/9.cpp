#include <bits/stdc++.h>
using namespace std;
int sum=0;
long long f(long long n)
{
    if(n==1) return 1;
    else if(n==2) return 2;
    else return f(n-1)+f(n-2);
}
int main()
{
    long long N;
    cin>>N;
    long long ans=f(N);
    cout<<ans<<endl;
    return 0;
}
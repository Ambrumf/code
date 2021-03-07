#include <bits/stdc++.h>
using namespace std;

int getfac(int n)
{
    if (n==1)return 0;
    for (int i=2;i<n;i++)if(n%i==0)return 0;
    return 1;
}
int main ()
{
    int x;
    while(cin>>x)cout<<getfac(x)<<endl;
    return 0;
}

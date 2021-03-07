#include <bits/stdc++.h>
using namespace std;
int fun(int m,int n)
{
    for (int i=m;i>0;i--)if(m%i==0 && n%i==0)return i;
}

int main ()
{
    int m,n;
    cin>>m>>n;
    cout<<fun(m,n)<<endl;
    return 0;
}

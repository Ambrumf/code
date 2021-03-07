#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x,sum=0,i,n;
    cin>>n;
    for (x=1;x<=n;x++)
    {
        for(i=1;i<x;i++) if (x % i==0) sum+=i;
        if (sum==x) cout<<x<<endl;
        sum=0;
    }

    return 0;
}

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <stdio.h>
using namespace std;

int main()
{
    double n,sum=1;
    while(cin>>n)
    {
    for(int i=1;i<=n;i++)
    {
        sum*=i;
    };
    cout<<setprecision(12)<<sum<<endl;
    sum=1;
    };
    return 0;
}

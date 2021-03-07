#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <stdio.h>
using namespace std;
int main()
{
    double a[20]={0};
    int b;
    a[1]=1;
    a[2]=1;
    for(int i=3;i<=20;i++)
        a[i]=a[i-2]+a[i-1];
    while(cin>>b)
    {
        cout<<a[b]<<endl;
    }
    return 0;
}

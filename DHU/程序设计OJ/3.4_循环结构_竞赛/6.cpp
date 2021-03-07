#include<iostream>
#include<cstdio>
#include<iomanip>
#include<cmath>
#include<locale.h>
using namespace std;
int main ()
{
    int N,t,a[1001],m=0,n=0;
    cin>>N;
    for(int i=1;i<1001;i++)a[i]=i;
    for(int i=5;i<1001;i=i*5)//除去5因子
        for(int j=i;j<1001;j+=i){a[j]/=5;}
    for(int i=2;i<1001;i=i*2)//除去2因子
        for(int j=i;j<1001;j+=i){a[j]/=2;}
    for(int i=2;i<N+1;i*=2)n+=N/i;
    for(int i=5;i<N+1;i*=5)m+=N/i;
    switch ((n-m)%4)
    {
        case 0: n=6;break;
        case 1: n=2;break;
        case 2: n=4;break;
        case 3: n=8;break;
    }

    t=1;
    for(int i=1;i<N+1;i++)
    {
        t*=a[i];
        t%=10;
    }
    t=t*n%10;
    cout<<t<<endl;
    return 0;
}

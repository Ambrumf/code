#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <stdio.h>
using namespace std;
int main()
{
    int a[100],b[100],sum=0,T,n,m,tmp;
    cin>>T;
    for(int i=0;i<T;i++)
    {
     cin>>n>>m;
     for(int i=0;i<n;i++)
     {
         cin>>m;
         a[i]=m;
     }
     for(int i=0;i<n-1;i++)
        for(int j=0;j<n-1-i;j++)
     if(a[j]>a[j+1]){tmp=a[j];a[j]=a[j+1];a[j+1]=tmp;}
     sum=(100-a[0])*(100-a[0]);
     cout<<sum<<endl;
    }
    return 0;
}

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <stdio.h>
using namespace std;
int main()
{
    int n,b,a[100],ma,sum=0,flag=0;
    while(cin>>n)
    {
        flag=0;
        for(int i=0; i<n; i++){cin>>b;a[i]=b;}
        ma=a[0];
        for(int i=1; i<n; i++)
        {
            if(a[i]>ma){ma=a[i];flag=1;}
        }
        if(flag==0){cout<<"none"<<endl;continue;}
        for(int i=0; i<n; i++)
        {
            if(a[i]==ma)a[i]=-100000;
        }
        ma=a[0];
        for(int i=0; i<n; i++)
        {
            if(a[i]>ma)ma=a[i];
        }
        cout<<ma;
        for (int i=0; i<n; i++)
        {
            if(a[i]==ma)cout<<' '<<i;
        }
            cout<<endl;
    sum=0;
    }

}

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <stdio.h>
using namespace std;
int main()
{
    int a[100],b,n,flag,t;
    while(cin>>n)
    {
        t=0;
        for(int i=0; i<n; i++)
        {
            cin>>b;
            a[i]=b;
        }
        for(int i=0; i<n; i++)
        {
            flag=0;
            for(int k=0; k<n; k++)
            {
                if(a[k]==a[i] && k!=i)flag=1;
            }
            if(!flag)t=i;
        }
        cout<<a[t]<<endl;

    }
     return 0;
}

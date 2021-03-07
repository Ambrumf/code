#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int a0,b0,t,flag=0;
    int k=0,m=0,n=0;
    int a[100],b[100];
    for (int i=0; i<101; i++) a[i]=0;
    for (int j=0; j<101; j++) a[j]=0;
    while(cin>>a0>>b0)
    {
        if(flag!=0)cout<<endl;
        flag=1;
        if(a0==0 && b0==0) break;
        for(int i=1; i<101; i++)
            for(int j=1; j<101; j++) if(a0*a0+i*i == b0*b0+j*j)
                {
                    a[k]=i;
                    b[m]=j;
                    k++;
                    m++;
                    n++;
                }
                //求解x,y并按顺序记录在a[],b[]中//
        for(int j=0; j<100; j++)
            for(int i=j; i<100;i++)if (a[i]<a[i+1])
                {
                    t=a[i];
                    a[i]=a[i+1];
                    a[i]=t;
                    t=b[i];
                    b[i]=b[i+1];
                    b[i]=t;
                };
        for(int i=0; i<n; i++)
            cout<<a[i]<<' '<<b[i]<<endl;

        for (int i=1; i<101; i++) a[i]=0;
        for(int j=1; j<101; j++) a[j]=0;
        k=0,m=0,n=0;

    }
    return 0;
}

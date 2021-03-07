#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <stdio.h>
using namespace std;
int main()
{
    int a[100],b[100],na,nb,T,t,tmp,flag;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        flag=0;
        cin>>na>>nb;
        for(int k=0; k<na; k++)
        {
            cin>>t;
            a[k]=t;
        }
        for(int j=0; j<nb; j++)
        {
            cin>>t;
            b[j]=t;
        }
        for(int j=0; j<nb; j++)
        {
            for(int k=0; k<na; k++)
            {
                if(a[k]==b[j])
                {
                    a[k]=0;
                }
            }
        }
        for(int i=0; i<na; i++)if(a[i]!=0)flag=1;
        if(flag==0)
        {
            cout<<"NULL"<<endl;
            break;
        }
        else
        {
            for (int j=0; j<na-1; j++)
                for(int k=0; k<na-1-j; k++)
                {
                    if(a[k]>a[k+1])
                    {
                        tmp=a[k];
                        a[k]=a[k+1];
                        a[k+1]=tmp;
                    }
                }
            for(int j=0; j<na; j++)
            {
                if(a[j]!=0)cout<<a[j]<<' ';
            }
            cout<<endl;
        }
    }

    return 0;
}

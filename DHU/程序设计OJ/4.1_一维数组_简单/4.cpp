#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <stdio.h>
using namespace std;
int main()
{

    int n,a[10000],m,t,tmp,flag;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        for(int j=0;j<m;j++)
        {
            cin>>t;
            a[j]=t;
        }
        for(int k=0;k<m-1;k++)
            for(int j=0;j<m-1-k;j++)
        {
            flag=0;
            if(a[j]>a[j+1]){tmp=a[j];a[j]=a[j+1];a[j+1]=tmp;flag=1;};
        }
        for(int j=0;j<m;j++)
        {
            if(j==0)cout<<a[j];
                else cout<<' '<<a[j];
        }
        cout<<endl;
    }
    return 0;
}

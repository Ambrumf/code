#include <bits/stdc++.h>
using namespace std;

int func(char a[])
{
    char t;
    for (int i=0;i<2;i++)
    for(int j=0;j<2-i;j++)if(a[j]>a[j+1]){t=a[j];a[j]=a[j+1];a[j+1]=t;}
    return 0;
}

int main ()
{
    char a[4];
    int T,m,n;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>a;
        func(a);
        for(int i=0;i<2;i++)cout<<a[i]<<' ';
        cout<<a[2]<<endl;
    }
    return 0;
}

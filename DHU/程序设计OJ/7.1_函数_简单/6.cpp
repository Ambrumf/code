#include <bits/stdc++.h>
using namespace std;

int bubblesort(int a[])
{
    int t;
    for (int i=0;i<9;i++)
    for(int j=0;j<9-i;j++)if(a[j]>a[j+1]){t=a[j];a[j]=a[j+1];a[j+1]=t;}
    return 0;
}

int main ()
{
    int a[10];
    int T,m,n;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        for(int i=0;i<10;i++)cin>>a[i];
        bubblesort(a);
        for(int i=0;i<9;i++)cout<<a[i]<<' ';
        cout<<a[9]<<endl;
    }
    return 0;
}

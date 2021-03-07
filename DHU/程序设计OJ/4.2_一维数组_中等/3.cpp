#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int L,lh,rh,n,a[10001],sum=0;
    while (scanf("%d",&L)!=EOF)
    {
        sum=0;
        cin>>n;
        for(int i=0;i<L+1;i++)a[i]=1;
        for(int i=0;i<n;i++)
        {
            cin>>lh>>rh;
            for(int k=lh;k<rh+1;k++)a[k]=0;
        }
        for(int i=0;i<L+1;i++)sum+=a[i];
        cout<<sum<<endl;
    }
    return 0;
}

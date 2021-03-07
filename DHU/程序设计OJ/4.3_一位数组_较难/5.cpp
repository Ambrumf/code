#include <bits/stdc++.h>
# include <stdio.h>

using namespace std;

int main()
{
    int a[100000],n,j=1,flag;
    long long sum=2;
    cin>>n;
    a[0]=2;
    for(int i=3;j<n+1;i++)
    {
        flag=0;
        for(int k=2;k<sqrt(i)+1;k++)
        {
            if(i%k==0){flag=1;break;}
        }
        if(flag==0){a[j]=i;j++;}
    }
    for(int i=1;i<n;i++)
    {
        sum*=a[i];
        sum%=50000;
    }
    if(n==0)cout<<0;
    else cout<<sum;
    return 0;

}

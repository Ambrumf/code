#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[300],t;
    while(scanf("%d",&n) != EOF)
    {
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n-1;i++)
            for(int j=0;j<n-1-i;j++)if(a[j]>a[j+1]){t=a[j];a[j]=a[j+1];a[j+1]=t;}
        for(int i=0;i<n;i++)
        {
            while(!(a[i+1]!=a[i] || i==n-1)){for(int j=i+1;j<n;j++)a[j]=a[j+1];n--;}
        }
        for(int i=0;i<n;i++){if(i==0)cout<<a[i];else cout<<' '<<a[i];}
        cout<<endl;
    }
    return 0;
}

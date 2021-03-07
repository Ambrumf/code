#include <iostream>

using namespace std;

int main()
{
    int a[22][22],n,T;
    for(int i=1;i<22;i++)
      for(int j=1;j<i+1;j++)
    {
        if(j==1 || j==i)a[i][j]=1;
        else a[i][j]=a[i-1][j-1]+a[i-1][j];
    }
    cin>>T;
    for(int k=0;k<T;k++)
    {
    cin>>n;
    for(int i=1;i<n+1;i++)
    {
        for (int j=1;j<i+1;j++)
        {if (j==i)cout<<a[i][j];
        else cout<<a[i][j]<<' ';}
        cout<<endl;
    }
    cout<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[11][11],n;
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)cin>>a[i][j];
        for(int i=0;i<n;i++)
            for(int j=i;j<n;j++){int t=a[i][j];a[i][j]=a[j][i];a[j][i]=t;}
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){cout<<a[i][j];if(j<n-1)cout<<' ';}
            cout<<endl;}
        cout<<endl;
    }
    return 0;
}
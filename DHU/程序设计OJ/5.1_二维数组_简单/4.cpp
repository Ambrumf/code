#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,product,quotient;
    int a[10][10];
    cin>>m;
    cin>>n;
    while(m)
    {
    product=0;
    quotient=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)cin>>a[i][j];
    for(int i=0;i<n;i++){product+=a[i][i]*a[n-1-i][i];quotient+=a[i][i]/a[n-1-i][i];}
    cout<<product<<' '<<quotient<<endl;
        m--;
    }
    return 0;
}

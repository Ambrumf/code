#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <stdio.h>
using namespace std;

int main()
{
    int flag=0,n;
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)
        {
            if(flag==0) cout<<i;
            else cout<<'+'<<i;
            flag=1;
        };
        for(int i=n-1;i>=1;i--)
        {
            cout<<'+'<<i;
        };
        cout<<endl;
            flag=0;
    }
    return 0;
}

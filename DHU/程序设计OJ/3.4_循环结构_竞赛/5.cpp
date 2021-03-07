#include<iostream>
#include<cstdio>
#include<iomanip>
#include<cmath>
#include<locale.h>
using namespace std;

int main ()
{
    int T,a,b,a0;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>a>>b;
        a0=a;
        for(int j=0;j<b-1;j++)
        {
            a=a*a0;
            a%=1000;
        }
        cout<<a<<endl;
    }
}

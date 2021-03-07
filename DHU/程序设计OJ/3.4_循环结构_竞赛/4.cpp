#include<iostream>
#include<cstdio>
#include<iomanip>
#include<cmath>
#include<locale.h>
using namespace std;

int main ()
{
    setlocale(LC_CTYPE, "chs");
    wchar_t c;
    double T,n;
    int tmp;
    double a,b,sum=0;
    cin>>T;
    for(int j=0;j<T;j++)
    {
        cin>>n;
        cin.get();
        for(int i=0;i<n;i++)//计算单个菜品菜价
        {
            c=cin.get();
            while(c!=' ')
            {
                c=cin.get();
            }
            cin>>a>>b;
            sum+=a*b;
        }
        tmp=(sum+0.05)*10;
        sum=tmp/10.0;
        cout<<fixed<<setprecision(1)<<sum<<endl;
        sum=0;
    }
    return 0;
}

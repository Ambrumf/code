#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int SPA=8,SPB=5,SP=45;
    double n,k=0;
    double x1=0,x2=200,t=0;
    while(cin>>n && n!=0)
    {
        do
        {
            if(x2-x1>=n)
            {
                t=(x2-x1)/(SPB+SP);
                x1+=SPA*t,x2-=SPB*t;
                k++;
            }
            if(x2-x1>=n)
            {
                t=(x2-x1)/(SPA+SP);
                x1+=SPA*t,x2-=SPB*t;
                k++;
            }

        }
        while(x2-x1>=n);
        cout<<k<<endl;
        k=0,x1=0,x2=200;

    }
    return 0;
}

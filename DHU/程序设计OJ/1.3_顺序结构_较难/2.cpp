#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a,b;
    while (cin>>a)
    {
    b=sqrt(a);

    cout<<fixed<<setprecision(6)<<b<<endl;
    }

    return 0;
}

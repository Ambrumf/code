#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double rad,h,V,S;
    const double PI=3.14;

    cin>>rad>>h;
    V=PI*rad*rad*h;
    S=2*PI*rad*rad+2*PI*rad*h;
    cout<<fixed<<setprecision(3)<<V<<' '<<S;
    return 0;
}

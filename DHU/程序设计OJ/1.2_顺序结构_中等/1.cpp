#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double c,f;
    int x;
    cin>>c;
    x=((9/5.0)*c+32+0.005)*100;
    f=x/100.0;
    cout<<fixed<<setprecision(6)<<f;
    return 0;
}

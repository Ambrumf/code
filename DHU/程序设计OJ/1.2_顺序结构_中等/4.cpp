#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char ch1,ch2,ch3;
    double x;
    int s,y;

    cin>>ch1;
    cin>>ch2;
    cin>>ch3;
    x=(ch1+ch2+ch3)/3.0;
    s=(ch1+ch2+ch3)/3;
    y=(ch1+ch2+ch3)%3;


    cout<<fixed<<setprecision(6)<<x<<' '<<s<<' '<<y;
    return 0;
}

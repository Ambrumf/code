#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double money=0,rate=0,year=0,sum=0;
    cin>>money>>year>>rate;
    for(int i=0;i<year;i++) money*=(1+rate);
    cout<<setprecision(1)<<fixed<<money;
    return 0;
}

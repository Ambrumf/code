#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num;
    double fee;
    cin >> num;
    fee=num*5;
    if (num>120) fee*=0.7;
        else if (num>80) fee*=0.8;
            else if (num>40) fee*=0.85;
                else if (num>20) fee*=0.9;
    cout<<fixed<<setprecision(2)<<fee;

    return 0;

}

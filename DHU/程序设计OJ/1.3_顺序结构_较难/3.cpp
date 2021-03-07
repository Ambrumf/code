#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int a,b,c,x;
    while(cin>>x)
    {
        a = x / 100;
        b = (x % 100) / 10;
        c = (x % 100) % 10;
        x=a+10*b+100*c;
        cout<<setw(3)<<x<<endl;
    }
    return 0;
}

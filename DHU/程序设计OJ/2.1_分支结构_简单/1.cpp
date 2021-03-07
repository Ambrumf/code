#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int h,slr;
    cin>>h;
    if (h<=160) slr = h * 10;
    else slr = 160*10+30*(h-160);
    cout<< slr;

    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a,b,c;
    double result;
    cin>>a>>b>>c;
    result=(a+b+c)/3.0;
    cout<<fixed<<setprecision(2)<<result;
    return 0;
}

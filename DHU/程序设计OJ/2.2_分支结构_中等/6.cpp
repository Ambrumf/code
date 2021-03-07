#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int x,y;
   cin>>x;
   if(x<=5) y = x * x+ 3 * x - 4;
    else y = x * x - 5 * x +7;
   cout<<y;
    return 0;
}

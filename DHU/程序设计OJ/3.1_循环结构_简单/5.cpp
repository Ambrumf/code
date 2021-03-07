#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   double c,x,n=1;
   cin>>c;
   c=c/100;
   for (int i=1;n<2;i++)n=n*(1+c),x=i;
   cout<<x;
   return 0;

}

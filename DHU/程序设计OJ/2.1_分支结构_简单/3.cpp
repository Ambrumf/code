#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    char ch1,ch2,ch3,x;
    cin>>ch1>>ch2>>ch3;
    if (ch1<ch2);
    else  {x=ch1;ch1=ch2;ch2=x;};

    if (ch3<ch1) cout << ch3<<ch1<<ch2;
    else  if (ch3<ch2) cout<<ch1<<ch3<<ch2;
          else cout<<ch1<<ch2<<ch3;


    return 0;
}

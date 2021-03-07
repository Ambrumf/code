#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a,b,c;
    char op;
    cin>>a>>b>>op;
    if((op==47)&&b==0) cout<<"Wrong!";
    else
    {switch (op)
        {
        case 43 : c=a+b;break;
        case 45 : c=a-b;break;
        case 42 : c=a*b;break;
        case 47 : c=a/b;
        }
        cout<<fixed<<setprecision(1)<<c;
    }
    return 0;

}

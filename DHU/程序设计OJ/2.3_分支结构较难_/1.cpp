#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int y;
    while (cin>>y)
    {
        switch (y)
        {
        case 2:
            ;
        case 3:
            cout<<"One."<<endl;
            break;
        case 4:
            cout<<"Two."<<endl;
            break;
        case 5:
            ;
        case 6:
            cout<<"Three."<<endl;
            break;
        default :
            cout<<"No."<<endl;
        }
    }
    return 0;
}

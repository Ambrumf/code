#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int grade;
    while(cin>>grade)
    {
        if(grade==-1) break;
        switch(grade/10)
        {
            case 10:;
            case 9:cout<<'A'<<endl;break;
            case 8:cout<<'B'<<endl;break;
            case 7:;
            case 6:cout<<'C'<<endl;break;
            default :cout<<'D'<<endl;break;
        }
    }
    return 0;
}

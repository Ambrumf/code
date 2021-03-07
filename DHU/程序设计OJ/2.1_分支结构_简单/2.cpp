#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    char ch;
    while (cin>>ch)
    {
        if(ch-'a'<=12) cout<<++ch<<endl;
        else cout<<--ch<<endl;
    }

    return 0;
}

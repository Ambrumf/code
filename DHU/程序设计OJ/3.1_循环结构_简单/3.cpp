#include <iostream>

using namespace std;

int main()
{

    double x,y,i=-1,j=-1;
    int n;
    while(cin>>x)
    {
    y=x;
    while(x==(n=x))
    {
        x/=4;
        i++;
    }
    while(y==(n=y))
    {
        y/=7;
        j++;
    }
    cout<<i<<' '<<j<<endl;
    i=-1,j=-1;
    }
}



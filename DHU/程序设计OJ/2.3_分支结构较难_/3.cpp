#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double d;
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
        {
        cin>>d;
        if (d>=0) cout<<fixed<<setprecision(2)<<d<<endl;
        else cout<<fixed<<setprecision(2)<<-d<<endl;

        }
    return 0;
}

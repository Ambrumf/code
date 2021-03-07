#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double a,sn=1,an=1,threshold;
    int n=1;
    cin>>threshold;
    for(int i=1;; i++)
    {

        for(int j=1; j<=i; j++)
        {
            an/=j;
        }
        if(an<threshold)break;
        sn+=an;
        n+=1;
        an=1;
    }
    if(threshold>1)cout<<fixed<<setprecision(6)<<"0.000000"<<' '<<0;
    else cout<<fixed<<setprecision(6)<<sn<<' '<<n;
    return 0;

}

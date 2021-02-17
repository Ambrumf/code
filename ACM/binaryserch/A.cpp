#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#include <iomanip>
using namespace std;
double funx(double x)
{
    return 8*x*x*x*x + 7*x*x*x + 2*x*x + 3*x + 6;
}
void findx(double y)
{
    if(y<funx(0) || y>funx(100)){cout<<"No solution!"<<endl;return;}
    double l=0,r=100;
    double mid=(l+r)/2;
    while(r-l>1/1e9){
        if(funx(mid)<y){l=mid;mid=(l+r)/2;}
        else {r=mid;mid=(l+r)/2;}
    }
    cout<<fixed<<setprecision(4)<<mid<<endl;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        double y;
        cin>>y;
        findx(y);
    }
    return 0;
}
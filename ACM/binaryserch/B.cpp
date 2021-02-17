#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
using namespace std;
typedef long long ll;
double cal(double x,double y){
    return 42*pow(x,6)+48*pow(x,5)+21*x*x+10*x-y ;
}
double calans(double x,double y){
	return 6*pow(x,7)+8*pow(x,6)+7*pow(x,3)+5*pow(x,2)-y*x;
}
int main()
{
    double x,y;
    int t;
    cin>>t;
    while(t--){
        cin>>y;
        double r=100,l=0;
        double mid=50;
        while(1)
        {
            if((r-l)<0.000000001)break;
            if(cal(mid,y)<0)
            {
                l=mid;
                mid=(l+r)/2;
            }
            else
            {
                r=mid;
                mid=(l+r)/2;
            }
        }
        double ans=calans(mid,y);
        cout<<fixed<<setprecision(4)<<ans<<endl;
    }
    return 0;
}
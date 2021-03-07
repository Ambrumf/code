#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
#include <iomanip>
using namespace std;
typedef long long ll;
const double PI=acos(-1);
bool check(double mid,vector<double> &v,int m)
{
    int k=0;
    for(auto x:v){
      if(m<=0)break;
      int t=(x*x)/(mid);
      m-=t;
    }
    if(m<=0)return 1;
    else return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,m;
      cin>>n>>m;
      m++;
      vector<double> v;
      double t;
      while(n--){cin>>t;v.push_back(t);}
      sort(v.begin(),v.end());
      double l=0,r=v.back()*v.back(),mid=(l+r)/2;
      while(1){
          if(r-l<1e-7)break;
          if(check(mid,v,m)){
              l=mid;
          }
          else r=mid;
          mid=(l+r)/2;
      }
      cout<<setprecision(4)<<fixed<<mid*PI<<endl;
    }
    return 0;
}

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
ll check(double mid, vector<double> &v)
{
    ll sum=0;
    for (auto x : v)
    {
        sum+=x/mid;
    }
    return sum;
    
}
int main()
{
    ll n, k;
    double mid;
    vector<double> v;
    while (cin >> n >> k)
    {
        v.clear();
        if (n == 0 && k == 0)
            break;
        while (n--)
        {
            double t;
            cin >> t;
            v.push_back(t+0.005);
        }
        sort(v.begin(), v.end());
        double l = 0, r = v.back();
        mid = (l + r) / 2;
        while (r-l>1e-8)
        {
            if (check(mid, v)>=k)
            {
                l = mid;
            }
            else
                r = mid;
            mid = (l + r) / 2;
        }
        int x=mid*100;mid=(double)x/100;
        cout << setprecision(2) << fixed << mid << endl;

    }
    return 0;
}

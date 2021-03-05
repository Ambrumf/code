#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;
 int extend_gcd(int a, int b, int &x, int &y) {
	if (b == 0) {
		x = 1; y = 0;
		return a;
	} 
	else {
		int ret = extend_gcd(b, a % b, y, x);
		y -= x * (a / b);
		return ret;
	}
 }

int main()
{
    int x,y;
    extend_gcd(2,-1,x,y);
    cout<<x<<' '<<y;
    return 0;
}

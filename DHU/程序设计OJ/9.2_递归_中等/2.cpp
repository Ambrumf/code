#include <bits/stdc++.h>
using namespace std;
int a[23], b[23], pos, sum = 0, rh, T,counter=0;
int n;
void print(int rh)
{
    for (int i = rh; i >= 0; i--)
        cout << b[i] << ' ';
    cout << endl;
}
void combination(int pos, int rh,int sum)
{
    if (pos < 0)
        return;
    combination(pos - 1, rh,sum);
    b[rh] = a[pos];sum+=b[rh];
    if(sum==T){print(rh);counter++;}
    combination(pos - 1, rh + 1,sum);
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> T;
    combination(n - 1,0,0);
    cout<<counter;
    return 0;
}

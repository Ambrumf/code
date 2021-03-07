#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#include <iomanip>
#include <stdio.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    while (cin >> t)
    {
        ll a[3][3];
        a[0][0] = t;
        cin >> a[0][1] >> a[0][2];
        for (int i = 1; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin >> a[i][j];
        string str[6] = {"BCG", "BGC", "CBG", "CGB", "GBC", "GCB"};
        ll j[6];
        j[0] = a[1][0] + a[2][0] + a[0][2] + a[2][2] + a[0][1] + a[1][1];
        j[1] = a[1][0] + a[2][0] + a[0][1] + a[2][1] + a[0][2] + a[1][2];
        j[2] = a[1][2] + a[2][2] + a[0][0] + a[2][0] + a[0][1] + a[1][1];
        j[3] = a[1][2] + a[2][2] + a[0][1] + a[2][1] + a[0][0] + a[1][0];
        j[4] = a[1][1] + a[2][1] + a[0][0] + a[2][0] + a[0][2] + a[1][2];
        j[5] = a[1][1] + a[2][1] + a[0][2] + a[2][2] + a[0][0] + a[1][0];
        ll mmin = j[0];
        int i = 0;
        for (int k = 0; k < 6; k++)
        {
            if (j[k] < mmin)
            {
                mmin = j[k];
                i = k;
            }
        }
        cout << str[i] << ' ' << mmin << endl;
    }
    return 0;
}
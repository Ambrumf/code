#include <bits/stdc++.h>
# include <stdio.h>

using namespace std;
int main()
{
    int x, a[6],t;
    while (cin >> x)
    {
        x--;
        int sum = 0;
        for (int i = 0; i < 6; i++)a[i] = 0;
        a[0] = 1;
        while (x--)
        {
            t = 0;
            for (int i = 5; i > 0; i--)a[i] = a[i - 1];
            for (int i = 2; i < 5; i++)t += a[i];
            a[0] = t;
        }
        for (int i = 0; i < 6; i++)sum += a[i];
        cout << sum << endl;
    }
    return 0;
}

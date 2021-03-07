#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        int sum = 0;
        for (int a = n; a > 0; a--)
            for (int b = n; b > 0; b--)
            {
                if (a <= b)
                    continue;
                for (int c = n; c > 0; c--)
                {
                    if (b <= c)
                        continue;
                    if (a + b + c == n && a+b>c && a+c>b && b+c>a)
                       sum++;
                }
            }
        cout << sum << endl;
    }
    return 0;
}

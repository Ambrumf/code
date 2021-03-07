#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
#include <stdio.h>
#include <string.h>
using namespace std;
typedef long long ll;
const int MAX = 20000;
int main()
{
    int n, mmax, counter;
    int aa[20000] = {}, pick[20000] = {};
    while (cin >> n)
    {
        if (n == 0)
            break;
        counter = 0;
        mmax = 0;
        memset(aa, 0, sizeof(aa));
        memset(pick, 0, sizeof(pick));
        for (int i = 0; i < n; i++)
        {
            cin>>aa[i];
            counter = max(counter, ++pick[aa[i]]);
        }
        cout << counter << endl;
        sort(aa,aa+n);
        for (int i = 0; i < counter; i++)
            for (int j = i; j < n; j += counter)
            {
                printf("%d", aa[j]);
                if (j + counter < n)
                    cout << ' ';
                else
                    cout << endl;
            }
    }
    return 0;
}
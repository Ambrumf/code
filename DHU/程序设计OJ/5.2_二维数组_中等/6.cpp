#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
using namespace std;
const int MAX = 401;
int check(int a, int b, int ans,int p[][401])
{
    int temp = p[a][b];
    for (int i = 0; i < ans; i++)
        for (int j = 0; j < ans; j++)
        {
            if (p[a + i][b + j] != temp)
                return 0;
        }
    return 1;
}
int main()
{
    int map[MAX][MAX];
    int a, b, mmax, ans = 0;
    cin >> a >> b;
    mmax = a > b ? b : a;
    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
            cin >> map[i][j];
    if (a > b)
        mmax = a;
    else
        mmax = b;
    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
            for (int k = ans + 1; k <= mmax; k++)
            {
                if (i + k <= mmax && j + k <= mmax)
                    if (check(i, j, k,map))
                        ans = k;
                    else
                        break;
            }
    cout << ans*ans;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, m[8][8], take[8], ans[16] = {}, counter = 0;
bool isvalid(int a, int b)
{
    int flag = 0;
    for (int i = a; i++;)
    {
        if (i < 0 || i == n || m[i][b] == 0)
            break;
        if (m[i][b] == 2)
        {
            flag = 1;
            break;
        }
    }
    for (int i = a; i--;)
    {
        if (i < 0 || i == n || m[i][b] == 0)
            break;
        if (m[i][b] == 2)
        {
            flag = 1;
            break;
        }
    }
    for (int j = b; j++;)
    {
        if (j < 0 || j == n || m[a][j] == 0)
            break;
        if (m[a][j] == 2)
        {
            flag = 1;
            break;
        }
    }
    for (int j = b; j--;)
    {
        if (j < 0 || j == n || m[a][j] == 0)
            break;
        if (m[a][j] == 2)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
        return 0;
    return 1;
}
void fun(int a, int b, int num)
{
    if (b == n)
        return;
    if (m[a][b] == 1 && isvalid(a, b))
    {
        m[a][b] = 2;
        counter++;
        if (counter == num)
        {
            m[a][b] = 1;
            counter--;
            ans[num]++;
            return;
        }
        for (int i = a + 1; i < n; i++)
            fun(i, b, num);
        for (int i = 0; i < n; i++)
            for (int j = b + 1; j < n; j++)
                fun(i, j, num);
        m[a][b] = 1;
        counter--;
    }
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> m[i][j];
    for (int i = 1; i <=15; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                fun(j, k, i);
    for (int i = 1; i <= 15; i++)
        if(ans[i]!=0)cout << ans[i] << endl;
    return 0;
}

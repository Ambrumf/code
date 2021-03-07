#include <bits/stdc++.h>
using namespace std;
int main()
{
    const int MAX = 10001;
    int a[MAX] = {0}, k;
    set<int> fac;
    for (int i = 2; i < MAX; i++)
        a[i] = i;
    for (int i = 2; i < 122; i++)
    {
        if (a[i])
            for (int j = i + i; j < MAX; j += i)
                a[j] = 0;
    }
    for (auto x : a)
        if (x)
            fac.insert(x);
    string t;
    while (cin >> t)
    {
        deque<int> ans;
        k = t.size();
        int len = min(k, 4);
        for (int i = len; i > 0; i--)
        {

            for (int k = 0; k < t.length(); k++)
            {
                int sum = 0;
                for (int j = k; j < k + i; j++)
                    sum = sum * 10 + t[j] - 48;
                if (fac.find(sum) != fac.end())
                    ans.push_back(sum);
            }
        }
        sort(ans.begin(), ans.end());
        cout << ans.back() << endl;
    }
    return 0;
}
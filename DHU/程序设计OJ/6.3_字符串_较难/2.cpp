#include <bits/stdc++.h>
using namespace std;
set<int> fac;
int getlowerint(int n)
{
    deque<int> d;
    while (n)
    {
        d.push_front(n%10);
        n /= 10;
    }
    d.pop_front();
    int sum=0;
    while(!d.empty())
    {
        sum*=10;
        sum+=d.front();
        d.pop_front();
    }
    return sum;
}
bool ispurefac(int n)
{
    if(0<=n && n<=9){if(fac.find(n)!=fac.end())return 1;else return 0;}
    else if((fac.find(n)!=fac.end()) && ispurefac(getlowerint(n))) return 1;
    return 0;
}
int main()
{
    const int MAX = 20001;
    int a[MAX] = {0};
    vector<int> v;
    for (int i = 2; i < MAX; i++)
        a[i] = i;
    for (int i = 2; i < 220; i++)
    {
        if (a[i])
            for (int j = i + i; j < MAX; j += i)
                a[j] = 0;
    }
    for (auto x : a)
        if (x)
        {
            fac.insert(x);
            v.push_back(x);
        }
    int n, k = 0;
    int ans[20];
    for (int i = 169;; i++)
    {
        if (k == 20)
            break;
        if (ispurefac(v[i]))
        {
            ans[k] = v[i];
            k++;
        }


    }
            while (cin >> n)
        {
            cout << ans[n - 1] << endl;
        }
    return 0;
}
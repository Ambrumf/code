#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<string> s;
    string temp;
    while (cin >> temp)
    {
        for (string::iterator it=temp.begin();it!=temp.end();it++)
            *it=tolower(*it);
        s.insert(temp);
    }
    int mmax = 0;
    string name;
    for (auto x : s)
        if (s.count(x) > mmax)
            {mmax = s.count(x);name=x;}
    cout << name << ' ' << mmax;
    return 0;
}
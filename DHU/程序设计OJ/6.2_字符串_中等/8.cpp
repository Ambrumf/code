#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    string t1, t2;
    t1 = s1;
    t2 = s2;
    for (auto it=t1.begin();it!=t1.end();it++)
        *it = toupper(*it);
    for (auto it=t2.begin();it!=t2.end();it++)
        *it = toupper(*it);
    if (s1.size() != s2.size())
        cout << 1;
    else if (s1 == s2)
        cout << 2;
    else if (t1 == t2)
        cout << 3;
    else
        cout << 4;
    return 0;
}

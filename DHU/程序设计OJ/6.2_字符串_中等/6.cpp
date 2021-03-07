#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while (cin >> s)
    {
        vector<int> v;
        int num = 0, flag = 0, sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if ((i < s.size() - 1 && isdigit(s[i]) && !isdigit(s[i + 1])) || (i == s.size() - 1 && isdigit(s[i])))
            {
                num *= 10;
                num += s[i] - 48;
                v.push_back(num);
                num = 0;
            }
            else if (isdigit(s[i]))
            {
                num *= 10;
                num += s[i] - 48;
                sum++;
            }
        }
        if(v.empty())cout << 0;
        else cout<<v.size()<<' ';
        for (auto it = v.begin(); it < v.end(); it++)
        {
            cout << *it;
            if (it != v.end() - 1)
                cout << ' ';
        }
        cout << endl;
    }
    return 0;
}
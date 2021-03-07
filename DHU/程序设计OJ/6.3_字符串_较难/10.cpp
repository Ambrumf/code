#include <bits/stdc++.h>
using namespace std;
map<char, int> m;
vector<string> ans;
void find_combination(string *c, int num, string str)
{
    if (num == 0)
    {
        int a = 0, b = 0;
        for (auto x : str)
        {
            if (m[x] == 1)
                a++;
            if (m[x] == 0)
                b++;
        }
        if (a >= 1 && b >= 2)
            ans.push_back(str);
        return;
    }
    if (c[0] == "0")
        return;
    str += c[0];
    find_combination(c + 1, num - 1, str);
    str.erase(str.end() - 1);
    find_combination(c + 1, num, str);
}
int main()
{
    m.insert(make_pair('a', 1));
    m.insert(make_pair('e', 1));
    m.insert(make_pair('i', 1));
    m.insert(make_pair('o', 1));
    m.insert(make_pair('u', 1));
    m.insert(make_pair('b', 0));
    m.insert(make_pair('c', 0));
    m.insert(make_pair('d', 0));
    m.insert(make_pair('f', 0));
    m.insert(make_pair('g', 0));
    m.insert(make_pair('h', 0));
    m.insert(make_pair('j', 0));
    m.insert(make_pair('k', 0));
    m.insert(make_pair('l', 0));
    m.insert(make_pair('k', 0));
    m.insert(make_pair('n', 0));
    m.insert(make_pair('p', 0));
    m.insert(make_pair('q', 0));
    m.insert(make_pair('r', 0));
    m.insert(make_pair('s', 0));
    m.insert(make_pair('t', 0));
    m.insert(make_pair('v', 0));
    m.insert(make_pair('w', 0));
    m.insert(make_pair('x', 0));
    m.insert(make_pair('y', 0));
    m.insert(make_pair('z', 0));
    int n, M;
    while(scanf("%d%d",&n,&M)!=EOF){
        ans.clear();
        string *c = new string[M + 1];
        for (int i = 0; i < M; i++)
        {
            string t;
            cin >> t;
            c[i] = t;
        }
        c[M] = "0";
        string str;
        find_combination(c, n, str);
        sort(ans.rbegin(), ans.rend());
        for (auto x : ans)
            cout << x << endl;
        cout << ans.size() << endl
             << endl;
        delete[] c;
    }
    return 0;
}
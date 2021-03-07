#include <bits/stdc++.h>
using namespace std;
struct id
{
    string num;
    int year, mon, date;
    double value;
};
bool cmp(id a, id b)
{
    if (a.year != b.year)
        return a.year > b.year;
    else if (a.mon != b.mon)
        return a.mon > b.mon;
    else if (a.date != b.date)
        return a.date > b.date;
    else
        return a.num > b.num;
}
int main()
{
    int n;
    string t;
    vector<id> v;
    cin >> n;
    while (n--)
    {
        cin >> t;
        id temp;
        temp.num=t;
        temp.year = (t[9] - 48) + (t[8] - 48) * 10 + (t[7] - 48) * 100 + (t[6] - 48) * 1000;
        temp.mon = (t[11] - 48) + (t[10] - 48) * 10;
        temp.date = (t[13] - 48) + (t[12] - 48) * 10;
        temp.value = 0;
        for (int i = 0; i < t.size(); i++)
        {
            temp.value *= 10;
            temp.value += t[i] - 48;
        }
        v.push_back(temp);
    }
    sort(v.begin(), v.end(), cmp);
    for (auto x : v)
        cout << x.num << endl;
    return 0;
}

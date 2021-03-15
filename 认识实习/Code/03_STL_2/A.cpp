#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
using namespace std;
struct fruit
{
    string name;
    string place;
    int num;
};
bool cmp(fruit a, fruit b)
{
    if (a.place == b.place)
        return a.name < b.name;
    return a.place < b.place;
}
int main()
{

    int N;
    int T;
    cin >> T;
    while (T--)
    {
        vector<fruit> p;
        vector<string> place, name;
        int N;
        cin>>N;
        while (N--)
        {
            fruit tmp;
            cin >> tmp.name >> tmp.place >> tmp.num;
            p.push_back(tmp);
        }
        for (auto it : p)
            place.push_back(it.place);
        for (auto it : p)
            name.push_back(it.name);
        sort(place.begin(), place.end());
        place.erase(unique(place.begin(), place.end()), place.end());
        sort(name.begin(), name.end());
        name.erase(unique(name.begin(), name.end()), name.end());
        for (auto it : place)
        {
            cout << it << endl;
            for (auto i : name)
            {
                int sum = 0, flag = 0;
                string temp;
                for (auto itr = p.begin(); itr != p.end(); itr++)
                {
                    if ((*itr).name == i && (*itr).place == it)
                    {
                        flag = 1;
                        sum += (*itr).num;
                        temp = (*itr).name;
                    }
                }
                if (flag)
                    cout << "   |----" << temp << "(" << sum << ')' << endl;
            }
        }
        if(T!=0)cout << endl;
    }
}
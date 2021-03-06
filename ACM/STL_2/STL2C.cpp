#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
#include <stdio.h>
#include <cstring>
#include <stack>
#include <iomanip>
using namespace std;
typedef long long ll;
struct Clock
{
    int day, hour, minute;
    bool operator>(const Clock b) const
    {
        if (day > b.day)
            return 1;
        else if (hour > b.hour)
            return 1;
        else if (minute > b.minute)
            return 1;
        return 0;
    }
    bool operator<(const Clock b) const
    {
        if (day < b.day)
            return 1;
        else if (hour < b.hour)
            return 1;
        else if (minute < b.minute)
            return 1;
        return 0;
    }
    bool operator<=(const Clock b) const
    {
        if (day <= b.day)
            return 1;
        else if (hour <= b.hour)
            return 1;
        else if (minute <= b.minute)
            return 1;
        return 0;
    }
    void addtime(int x)
    {
        minute += x;
        if (minute >= 60)
        {
            int up = minute / 60;
            minute %= 60;
            hour += up;
        }
        if (hour >= 24)
        {
            int up = hour / 24;
            hour %= 24;
            day += up;
        }
    }
};
struct cus
{
    Clock time;
    Clock finish;
    int id, num, res, pos;
};
void showtime(Clock a)
{
    cout << setw(2) << setfill('0') << a.hour << ":" << setw(2) << setfill('0') << a.minute << endl;
}
int main()
{
    freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
    int n, t, k, m;
    int T;
    cin >> T;
    while (T--)
    {
        cin >> n >> t >> k >> m; //n: type t: time k: bowl m: cus
        vector<cus> v;
        for (int i = 0; i < m; i++)
        {
            int hour, minute, id, num;
            scanf("%d:%d %d %d", &hour, &minute, &id, &num);
            Clock tmp;
            cus a;
            if (v.empty())
                tmp.day = 0;
            else
            {
                tmp.day = v[i - 1].time.day;
                if (tmp < v[i - 1].time)
                    tmp.day++;
            }
            a.time = tmp;
            a.id = id;
            a.num = num;
            a.res = num;
            a.pos = i;
            v.push_back(a);
        }
        int i = 0, pan = k, type;
        deque<cus> chief;
        Clock now = v[0].time;
        while (i != m)
        {
            if (chief.empty())
                while (v[i].time <= now)
                {
                    chief.push_back(v[i]);
                    i++;
                }
            while (!chief.empty())
            {
                pan = k;
                while (chief.front().res == 0)
                {
                    showtime(now);
                    chief.pop_front();
                }
                type = chief.front().id;
                for (int i = 0; i < chief.size(); i++)
                {
                    if (chief[i].id != type)
                        break;
                    if (pan == 0)
                        break;
                    int cook = min(chief[i].res, pan);
                    chief[i].res -= cook;
                    pan -= cook;
                }
                now.addtime(t);
            }
        }
    }
    return 0;
}

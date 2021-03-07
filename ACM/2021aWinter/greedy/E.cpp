#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#include <iomanip>
#include <stdio.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}
int main()
{
    int m;
    cin >> m;
    int t1, t2;
    vector<pair<int, int> > v;
    pair<int, int> ans[1000];
    while (scanf("%d%d", &t1, &t2))
    {
        if(t1==0 && t2==0)break;
        v.push_back(make_pair(t1, t2));
    }
    sort(v.begin(), v.end(), cmp);
    int i,now=0,tmp=0,sum=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i].first<=now)
        {
            while(v[i].first<=now && i<v.size())
            {
                if(tmp<=v[i].second)
                {
                    tmp=v[i].second;
                    ans[sum].first=v[i].first;
                    ans[sum].second=v[i].second;
                }
                i++;
            }
                i--;
                sum++;
                now=tmp;
                if(now>=m)break;
        }
        else break;
    }
    if (now >= m)
    {
        cout << sum << endl;
        for (int i = 0; i < sum; i++)
        {
            cout << ans[i].first << ' ' << ans[i].second << endl;
        }
    }
    else cout<<"No solution";
    return 0;
}
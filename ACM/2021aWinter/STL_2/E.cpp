#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
using namespace std;
struct player
{
    int num;
    int card;
    int flag;
};
int main()
{
    int round = 0;
    int n, count = 0;
    while (cin >> n)
    {
        if (n == 0)
            break;
        string s;
        cin >> s;
        vector<player> v, vt;
        for (int i = 0; i < n; i++)
        {
            player t;
            t.num = i + 1;
            t.card = 3;
            v.push_back(t);
        }
        int id = 0, flag = 0, center = 0;
        while (!flag)
        {

            for (auto it = v.begin(); it != v.end(); it++)
            {
                if(flag)break;
                if(it->card==0){it++;break;}
                int times = min(it->card, 3);
                if (s.size() < times)
                {
                    s.clear();
                    id = it->num;
                    flag = 1;
                    break;
                }
                for (int i = 0; i < times; i++)
                {
                    char c = s[0];
                    int n = v.size();
                    switch (c)
                    {
                    case 'L':
                        it->card--;
                        if (it != v.end() - 1)
                            (it + 1)->card++;
                        else
                            v.begin()->card++;
                        break;

                    case 'R':
                        it->card--;
                        if (it != v.begin())
                            (it - 1)->card++;
                        else
                            (v.end() - 1)->card++;
                        break;
                    case 'C':
                        it->card--;
                        center++;
                        break;
                    }
                    int sum = 0;
                    if (sum == n - 1)
                    {
                        flag = 2;
                        break;
                    }
                    if (s.size() == 1)
                    {
                        if (it != v.end() - 1)
                            for(auto itt=it+1;itt!=v.end();itt++){
                                if(itt->card!=0)id=itt->num;
                            }
                        else
                            for(auto itt=v.begin();itt!=v.end()-1;itt++){
                                if(itt->card!=0)id=itt->num;
                            }
                        flag = 1;
                        s.erase(s.begin());
                        break;
                    }
                    s.erase(s.begin());
                }
            }
        }
        round++;
        cout << "Game " << round << ':' << endl;
        int k = 0;
        if (flag == 2)
        {
            for (int i = 0; i < n; i++)
            {
                cout << "Player " << i + 1 << ':';
                if((v[i].card)==0)
                    cout << 0 << endl;
                else
                    cout << v[i].card << "(W)" << endl;
            }
        }
        else
            for (int i = 0; i < n; i++)
            {
                cout << "Player " << i + 1 << ':';
                if (v[k].num > i + 1)
                    cout << 0 << endl;
                else
                {
                    if (i + 1 == id)
                        cout << v[k].card << "(*)" << endl;
                    else
                        cout << v[k].card << endl;
                    k++;
                }
            }
        cout << "Center:" << center << endl;
        cout << endl;
    }
    return 0;
}

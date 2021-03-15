#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
struct ol
{
    double gold;
    double sum;
    double ppl;
    double rank1, rank2, rank3, rank4;
    double num;
};
bool cmp1(ol a, ol b)
{
    return a.gold > b.gold;
}
bool cmp2(ol a, ol b)
{
    return a.sum > b.sum;
}
bool cmp3(ol a, ol b)
{
    return (a.gold / a.ppl) > (b.gold / b.ppl);
}
bool cmp4(ol a, ol b)
{
    return (a.sum / a.ppl) > (b.sum / b.ppl);
}
using namespace std;
int main()
{
    int N, M;
    while (scanf("%d", &N) != EOF)
    {
        cin >> M;
        int j = 0;
        ol temp;
        vector<ol> v, v0;
        while (N--)
        {
            temp.num = j;
            cin >> temp.gold >> temp.sum >> temp.ppl;
            v.push_back(temp);
            j++;
        }
        int M2 = M;
        while (M2--)
        {
            int t, m;
            int Min;
            cin >> m;
            for (int i = 0; i < v.size(); i++)
                if (v[i].num == m)
                {
                    t = i;
                    v0.push_back(v[i]);
                }
        }
        v = v0;
        j = 1;
        sort(v.begin(), v.end(), cmp1);
        for (int i = 0; i < v.size(); i++)
        {
            if (i == 0)
                v[i].rank1 = 1;
            else if (v[i].gold == v[i - 1].gold)
                v[i].rank1 = v[i - 1].rank1;
            else
                v[i].rank1 = j;
            j++;
        }

        j = 1;
        sort(v.begin(), v.end(), cmp2);
        for (int i = 0; i < v.size(); i++)
        {
            if (i == 0)
                v[i].rank2 = 1;
            else if (v[i].sum == v[i - 1].sum)
                v[i].rank2 = v[i - 1].rank2;
            else
                v[i].rank2 = j;
            j++;
        }

        j = 1;
        sort(v.begin(), v.end(), cmp3);
        for (int i = 0; i < v.size(); i++)
        {
            if (i == 0)
                v[i].rank3 = 1;
            else if (v[i].gold / v[i].ppl == v[i - 1].gold / v[i - 1].ppl)
                v[i].rank3 = v[i - 1].rank3;
            else
                v[i].rank3 = j;
            j++;
        }

        j = 1;
        sort(v.begin(), v.end(), cmp4);
        for (int i = 0; i < v.size(); i++)
        {
            if (i == 0)
                v[i].rank4 = 1;
            else if (v[i].sum / v[i].ppl == v[i - 1].sum / v[i - 1].ppl)
                v[i].rank4 = v[i - 1].rank4;
            else
                v[i].rank4 = j;
            j++;
        }
        int Min = 1e9, t;
        for (int j = 0; j < v.size(); j++)
            for (int i = 0; i < v0.size(); i++)
            
                if (v[i].num == v0[j].num){
                    t = i;
                Min = min(min(min(v[t].rank1, v[t].rank2), v[t].rank3), v[t].rank4);
                if (v[t].rank1 == Min)
                    cout << v[t].rank1 << ":1";
                else if (v[t].rank2 == Min)
                    cout << v[t].rank2 << ":2";
                else if (v[t].rank3 == Min)
                    cout << v[t].rank3 << ":3";
                else if (v[t].rank4 == Min)
                    cout << v[t].rank4 << ":4";
                cout << endl;
            }
        
        cout << endl;
    }
}
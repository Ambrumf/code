#include <bits/stdc++.h>
using namespace std;
struct card
{
    char number;
    int num;
    char color;
    int crank;
    card(char b, char a)
    {
        number = a;
        color = b;
        if (48 <= a && 57 >= a)
            num = number - 48;
        else if (number == 'T')
            num = 10;
        else if (number == 'J')
            num = 11;
        else if (number == 'Q')
            num = 12;
        else if (number == 'K')
            num = 13;
        else if (number == 'A')
            num = 14;
        if (b == 'S')
            crank = 4;
        else if (b == 'H')
            crank = 3;
        else if (b == 'D')
            crank = 2;
        else if (b == 'C')
            crank = 1;
    }
};
bool cmp(card a, card b)
{
    if (a.num != b.num)
        return a.num > b.num;
    return a.crank > b.crank;
}
int main()
{

    int n;
    scanf("%d", &n);
    cin.get();
    while (n--)
    {
        for (int j = 0; j < 4; j++)
        {
            int t = 13;
            vector<card> vc;
            while (t--)
            {
                char a, b;
                cin.get(a);
                cin.get(b);
                cin.get();
                card tmp(a, b);
                vc.push_back(tmp);
            }
            sort(vc.begin(), vc.end(), cmp);
            for (int i = 0; i < vc.size(); i++)
            {
                if (i > 0)
                    cout << ' ';
                cout << vc[i].color << vc[i].number;
            }
            cout << endl;
        }
        cout<<endl;
    }
    return 0;
}
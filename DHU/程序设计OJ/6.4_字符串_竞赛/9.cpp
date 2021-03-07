#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
set<int> s;
int aa[100000];
vector<int> v;
int circul[1000];
int main()
{
    int m[10] = {};
    int n, d, k = 0, l, r;
    cin >> n >> d;
    int  flag = 0;
    int real = n / d;
    int x = n % d;
    v.push_back(x);
    if (x != 0)
    {
        while (1)
        {
            if (x == 0)
                break;
            x *= 10;
            aa[k] = x / d;
            x = x % d;
            k++;
            if (find(v.begin(), v.end(), x) != v.end())
            {
                flag = 1 ;
                int j;
                for (j = 0; j < k; j++)
                    if (v[j] == x)
                        break;
                l = j+1;
                break;
            }
            
            v.push_back(x);
        }
        int counter = 0;
        int tmp = real;
        if(tmp==0)counter++;
        while (tmp)
        {
            counter++;
            tmp /= 10;
        }
        cout << real << '.';
        counter++;
        if (flag == 0)
            for (int i = 0; i < k; i++)
            {
                cout << aa[i];
                counter++;
                if (counter % 76 == 0)
                    cout << endl;
            }
        else
        {
            for (int i = 0; i < l-1; i++)
            {
                cout << aa[i];
                counter++;
                if (counter % 76 == 0)
                    cout << endl;
            }
            cout << '(';
            counter++;if (counter % 76 == 0)
                    cout << endl;
            for (int i = l-1; i < k; i++)
            {
                cout << aa[i];
                counter++;
                if (counter % 76 == 0)
                    cout << endl;
            }
            cout << ')';counter++;if (counter % 76 == 0)
                    cout << endl;
        }
    }
    else
        cout << real << ".0";
    return 0;
}

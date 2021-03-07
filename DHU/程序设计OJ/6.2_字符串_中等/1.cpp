#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while (getline(cin, s))
    {
        int mmax = -1, lh = 0, rh;
        string ms;
        for (int i = 1; i < s.size(); i++)
        {
            if (i == s.size() - 1)
                {
                    rh = i+1;
                    int temp = rh - lh;
                    if (temp > mmax)
                    {
                        ms = s.substr(lh, temp);
                        mmax = temp;
                    }
                }
            if(s[i]==' ' && s[i-1]!=' ' ){
                rh = i;
                int temp = rh - lh;
                if (temp > mmax)
                {
                    ms = s.substr(lh, temp);
                    mmax = temp;
                }
            }
            if(s[i]!=' ' && s[i-1]==' ')lh=i;
        }
        cout << mmax << ' ' << ms << endl;
    }
}
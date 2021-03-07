#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0;
    string s;
    while(getline(cin,s))
    {
        if (find(s.begin(),s.end(),'?')!=s.end())continue;
        else if(find(s.begin(),s.end(),'+')!=s.end())//plus
        {
            int a=0,b=0,c=0;
            while(s.front()!='+')
            {
                a*=10;
                a+=s.front()-48;
                s.erase(s.begin());
            }
            s.erase(s.begin());
            while(s.front()!='=')
            {
                b*=10;
                b+=s.front()-48;
                s.erase(s.begin());
            }
            s.erase(s.begin());
            while(!s.empty())
            {
                c*=10;
                c+=s.front()-48;
                s.erase(s.begin());
            }
            if(a+b==c)sum++;    
        }
        else //minus
        {
            int a=0,b=0,c=0;
            while(s.front()!='-')
            {
                a*=10;
                a+=s.front()-48;
                s.erase(s.begin());
            }
            s.erase(s.begin());
            while(s.front()!='=')
            {
                b*=10;
                b+=s.front()-48;
                s.erase(s.begin());
            }
            s.erase(s.begin());
            while(!s.empty())
            {
                c*=10;
                c+=s.front()-48;
                s.erase(s.begin());
            }
            if(a-b==c)sum++;    
        }

    }
    cout<<sum;
    return 0;
}
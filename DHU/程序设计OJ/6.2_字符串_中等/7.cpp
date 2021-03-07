#include <bits/stdc++.h>
using namespace std;
int main()
{
    int  d;
    string s;
    while(cin>>d)
    {
        vector<char> v;
        cin>>s;
        int k=1;
        for(int i=0;i<s.size();i++)v.push_back(s[i]);
        int ans=0;
        while(!v.empty())
        {
            if(isdigit(v.back()))ans+=(v.back()-48)*k;
            else ans+=(v.back()-55)*k;
            v.pop_back();
            k*=d;
        }
        cout<<ans<<endl;
    }
}

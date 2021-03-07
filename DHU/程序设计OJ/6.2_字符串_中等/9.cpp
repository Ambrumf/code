#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        vector<string> v;
        while(!s.empty()){
            v.push_back(s);
            s.erase(s.begin());
        }
        sort(v.begin(),v.end());
        for(auto x:v)cout<<x<<endl;
    }
    return 0;
}

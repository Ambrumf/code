#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        vector<int> v;
        for(int i=0;i<s.size();i++){
            if((s[i]-48)%2==0)v.push_back(s[i]-48);
        }
        sort(v.rbegin(),v.rend());
        if(v.empty())cout<<"None"<<endl;
        else {for(auto x:v)cout<<x;cout<<endl;}
    }
    return 0;
}

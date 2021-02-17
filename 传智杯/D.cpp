#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    cin.get();
    vector<string> vs;
    while(T--){
        string t;
        cin>>t;
        if(t=="ls")
        {
            if(vs.empty()) continue;
            else for(auto x:vs)cout<<x<<endl;
        }
        else if(t=="touch")
        {
            string tmp;
            cin>>tmp;
            if(find(vs.begin(),vs.end(),tmp)!=vs.end())continue;
            else vs.push_back(tmp);
        }
        else if(t=="rename")
        {
            string tmp,tar;
            cin>>tmp>>tar;
            if(find(vs.begin(),vs.end(),tar)!=vs.end() || find(vs.begin(),vs.end(),tmp)==vs.end())continue;
            else *find(vs.begin(),vs.end(),tmp)=tar;
        }
        else if(t=="rm")
        {
            string tmp;
            cin>>tmp;
            if(find(vs.begin(),vs.end(),tmp)==vs.end())continue;
            else vs.erase(find(vs.begin(),vs.end(),tmp));
        }
    }
    return 0;
}
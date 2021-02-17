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
    vector<char[]> vs;
    while(T--){
        char t[2001];
        scanf;
        if(t=="ls")
        {
            if(vs.empty());
            else for(auto x:vs)cout<<x<<endl;
        }
        if(t=="touch")
        {
            char tmp[2001];
            cin>>tmp;
            if(find(vs.begin(),vs.end(),tmp)!=vs.end())continue;
            else vs.push_back(tmp);
        }
        if(t=="rename")
        {
            char tmp[2001];
            cin>>tmp>>tar;
            if(find(vs.begin(),vs.end(),tar)==vs.end() && find(vs.begin(),vs.end(),tmp)!=vs.end())*find(vs.begin(),vs.end(),tmp)=tar;
        }
        if(t=="rm")
        {
            string tmp;
            cin>>tmp;
            if(find(vs.begin(),vs.end(),tmp)==vs.end())continue;
            else vs.erase(find(vs.begin(),vs.end(),tmp));
        }
    }
    return 0;
}w
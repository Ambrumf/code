#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
int main()
{
    string temp1,temp2;
    cin>>temp1;
    map<string,string>m;
    while(cin>>temp1){
        if(temp1=="END")break;
        cin>>temp2;
        m.insert(pair<string,string>(temp2,temp1));
    }
    cin>>temp1;
    cin.get();
    while(getline(cin,temp1)){
        int lh=0,rh;
        vector<string> v;
        if(temp1=="END")break;
        char prev='!';
        for(int i=0;i<temp1.size();i++)
        {
            if(!isalpha(temp1[i])){
                string t=temp1.substr(i,1);
                v.push_back(t);
                prev=temp1[i];
                }
            if(isalpha(temp1[i]) && !isalpha(prev)){lh=i;prev=temp1[i];}
            if(i<temp1.size()-1)if(isalpha(temp1[i]) && !isalpha(temp1[i+1])){
                rh=i;
                string t=temp1.substr(lh,rh-lh+1);
                if(m.find(t)!=m.end())t=m[t];
                v.push_back(t);
                prev=temp1[i];
            }
            if(i==temp1.size())if(isalpha(temp1[i])){
                rh=i;
                string t=temp1.substr(lh,rh-lh+1);
                if(m.find(t)!=m.end())t=m[t];
                t=m[t];
                v.push_back(t);
                prev=temp1[i];
            }
        }
        for(auto x:v)cout<<x;
        cout<<endl;
    }
    return 0;
}
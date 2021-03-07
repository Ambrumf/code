#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    vector<string> v;
    while(n--){
        string s;
        cin>>s;
        v.push_back(s);
    }
    while(!v.empty()){
        if(*v.begin()==*(v.end()-1)){
        vector<string>::iterator it=v.begin(),et=v.end()-1;
        while(*it==*et && it<et){
            it++;
            et--;
        }
        if(*it==*et){cout<<*it;v.erase(it);}
        else {if(*it>*et){cout<<*(v.end()-1);v.erase(v.end()-1);}
                else {cout<<*v.begin();v.erase(v.begin());}
        }}
        else if(*v.begin()>*(v.end()-1)){cout<<*(v.end()-1);v.erase(v.end()-1);}
        else {cout<<*v.begin();v.erase(v.begin());}
        sum++;
        if(sum%80==0)cout<<endl;
    }
    return 0;
}
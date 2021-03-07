#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct str{
    string s;
    int num;
    str(string a,int b){s=a;num=b;}
};
bool cmp(str a,str b)
{
    if(a.s!=b.s)return a.s <b.s;
    else return a.num<b.num;
}
int main()
{
    int n;
    cin>>n;
    cin.get();
    string t;
    while(t.size()!=n)
    {
        string r;
        getline(cin,r);
        t+=r;
    }
    vector<str> v;
    for(int i=0;i<t.size();i++)
    {
        str tmp(t,i);
        v.push_back(tmp);
        if(i!=t.size()-1){
            char c=t.front();
            string r(1,c);
            t+=r;
            t.erase(t.begin());
        }
    }
    sort(v.begin(),v.end(),cmp);
    cout<<v.begin()->num;
    return 0;
}

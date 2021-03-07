#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isreverce(string t)
{
    vector<char> b,c;
    for(auto it=t.begin();it!=t.end();it++)b.push_back(*it);
    for(auto it=t.rbegin();it!=t.rend();it++)c.push_back(*it);
    if(b==c)return 1;
    else return 0;
}
bool ismirror(string t)
{
    map<char,char> m;
    m.insert(make_pair('A','A'));
    m.insert(make_pair('E','3'));
    m.insert(make_pair('H','H'));
    m.insert(make_pair('I','I'));
    m.insert(make_pair('J','L'));
    m.insert(make_pair('L','J'));
    m.insert(make_pair('M','M'));
    m.insert(make_pair('O','O'));
    m.insert(make_pair('S','2'));
    m.insert(make_pair('T','T'));
    m.insert(make_pair('U','U'));
    m.insert(make_pair('V','V'));
    m.insert(make_pair('W','W'));
    m.insert(make_pair('X','X'));
    m.insert(make_pair('Y','Y'));
    m.insert(make_pair('Z','5'));
    m.insert(make_pair('1','1'));
    m.insert(make_pair('2','S'));
    m.insert(make_pair('3','E'));
    m.insert(make_pair('5','Z'));
    m.insert(make_pair('8','8'));
    vector<char> a,b;
    for(auto x:t)if(m.find(x)==m.end())return 0;
    for(auto x:t)
        a.push_back(x);
//        if(m.find(x)==m.end())a.push_back(x);
//        else a.push_back(m[x]);
//    for(auto it=t.rbegin();it!=t.rend();it++)
//        if(m.find(*it)==m.end())b.push_back(*it);
//        else b.push_back(m[*it]);
    for(auto it=t.rbegin();it!=t.rend();it++)
        b.push_back(m[*it]);
    if(a==b)return 1;
    else return 0;
    
}
int main()
{
    string m;
    while(cin>>m)
    {
    bool reverse,mirror;
    reverse=isreverce(m);
    mirror=ismirror(m);
    if(reverse==1 && mirror==1)cout<<m<<" -- is a mirrored palindrome."<<endl;
    else if(reverse==0 && mirror ==0)cout<<m<<" -- is not a palindrome."<<endl;
    else if(reverse==1 && mirror ==0)cout<<m<<" -- is a regular palindrome."<<endl;
    else cout<<m<<" -- is a mirrored string."<<endl;
    cout<<endl;
    }
    return 0;
}

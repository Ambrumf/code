#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    map<int,string> m;
    m.insert(make_pair(0,"1"));
    m.insert(make_pair(1,"0"));
    m.insert(make_pair(2,"x"));
    m.insert(make_pair(3,"9"));
    m.insert(make_pair(4,"8"));
    m.insert(make_pair(5,"7"));
    m.insert(make_pair(6,"6"));
    m.insert(make_pair(7,"5"));
    m.insert(make_pair(8,"4"));
    m.insert(make_pair(9,"3"));
    m.insert(make_pair(10,"2"));
    cin>>a;
    a.insert(6,1,'9');
    a.insert(6,1,'1');
    int x;
    x=(a[0]-48)*7+(a[1]-48)*9+(a[2]-48)*10+(a[3]-48)*5+(a[4]-48)*8+(a[5]-48)*4+(a[6]-48)*2+(a[7]-48)*1+(a[8]-48)*6+(a[9]-48)*3+(a[10]-48)*7+(a[11]-48)*9+(a[12]-48)*10+(a[13]-48)*5+(a[14]-48)*8+(a[15]-48)*4+(a[16]-48)*2;
    x=x%11;
    a+=m[x];
    cout<<a;
    return 0;
}

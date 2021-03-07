#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct pep{
    string name;
    int money;
    int send;
    int ans;
    pep(string a,int b, int c,int d=0):name(a),money(b),send(c),ans(d){}
};
int main()
{
    int t;
    cin>>t;
    vector<pep> v;
    for(int i=0;i<t;i++)
    {
        int send(0),money(0);
        string s;
        cin>>s;
        pep tmp(s,money,send);
        v.push_back(tmp);
    }
    for(int p=0;p<t;p++)
    {
        string s;
        cin>>s;
        int x,n;
        cin>>x>>n;
        if(n!=0)for(auto &y:v)if(y.name==s)y.send=x-x%n;
        if(n==0) for(auto &y:v)if(y.name==s)y.send=x;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            for(auto &y:v)if(y.name==s)y.money+=x/n;
        }
    }
    for(auto &y:v){y.ans=y.money-y.send;cout<<y.name<<' '<<y.ans<<endl;}
    return 0;
}

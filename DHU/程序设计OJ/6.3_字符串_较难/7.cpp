#include <bits/stdc++.h>
using namespace std;
string bio(string a)
{
    int sum=0;
    while(!a.empty())
    {
        sum*=10;
        sum+=a.front()-48;
        a.erase(a.begin());
    }
    int bio=0,k=1;
    string t="";
    while(sum)
    {
        bio+=sum%2*k;
        sum/=2;
        k*=10;
    }
    while(bio)
    {
        t.insert(t.begin(),bio%10+48);
        bio/=10;
    }
    return t;


}

int main()
{
    string s;
    string bs;
    while(cin>>s)
    {
        bs=bio(s);
        string rs=s;
        string rbs=bs;
        reverse(rs.begin(),rs.end());
        reverse(rbs.begin(),rbs.end());
        if(rs==s && rbs==bs)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
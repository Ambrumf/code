#include <bits/stdc++.h>
using namespace std;
int f(string a)
{
    int sum=a.front()-64;
    a.erase(a.begin());
    while(!a.empty())
    {
        sum*=a.front()-64;
        a.erase(a.begin());
    }
    return sum;
}
int main()
{
    string a,b;
    cin>>a>>b;
    if(f(a)%47==f(b)%47)cout<<"GO";
    else cout<<"STAY";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    double a=1e9,e=1e9,i=1e9,o=1e9,u=1e9;
    if(s.find('a')!=-1 || s.find('e')!=-1 || s.find('i')!=-1 || s.find('o')!=-1 || s.find('u')!=-1 )
    {
        a=s.find_first_of('a');
        e=s.find_first_of('e');
        i=s.find_first_of('i');
        o=s.find_first_of('o');
        u=s.find_first_of('u');
        if(a<0)a=1e9;
        if(e<0)e=1e9;
        if(i<0)i=1e9;
        if(o<0)o=1e9;
        if(u<0)u=1e9;
        double ans=min(min(min(min(a,e),i),o),u);
        cout<<ans+1;
    }
    else cout<<0;
    return 0;
}
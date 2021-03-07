#include <bits/stdc++.h>
using namespace std;
int main()
{
    string scr;
    while(cin>>scr)
    {
        string temp;
        cin>>temp;
        int ans;
        if(scr.find(temp)==-1){cout<<0<<endl;continue;}
        else {ans=scr.find(temp)+1;cout<<ans<<endl;}
    }
    return 0;
}
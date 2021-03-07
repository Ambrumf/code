#include <bits/stdc++.h>
using namespace std;
long long fun(string a)
{
    long long sum=0;
    while(!a.empty())
    {
        sum=sum*10+a.front()-48;
        a.erase(a.begin());
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<long long> vec;
        string a;
        cin>>a;
        int pos=a.find("5");
        while(pos!=-1)
        {
            string tmp=a.substr(0,pos);
            while(tmp.front()=='0')
            {
                if(tmp.size()==1)break;
                tmp.erase(tmp.begin());
            }
            a.erase(0,pos+1);
            if(!tmp.empty())vec.push_back(fun(tmp));
            pos=a.find("5");
        }
        if(a.size()!=0)vec.push_back(fun(a));
        sort(vec.begin(),vec.end());
        for(int i=0;i<vec.size();i++){cout<<vec[i];if(i<vec.size()-1)cout<<' ';}
        cout<<endl;
    }
    return 0;
}
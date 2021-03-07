#include <bits/stdc++.h>
using namespace std;
struct word
{
    string words;
    int num;
    int flag;
};
bool cmp(word a,word b)
{
    return a.num<b.num;
}
int main()
{
    string t;
    int k=1;
    getline(cin,t);
    vector<word> v,rv,ans;
    while(find(t.begin(),t.end(),' ')!=t.end())
    {
        auto it=find(t.begin(),t.end(),' ');
        string tmp(t.begin(),it);
        t.erase(t.begin(),it+1);
        word w={tmp,k,0};
        v.push_back(w);
        k++;
    }
    word w={t,k,0};
    v.push_back(w);
    rv=v;
    for(int i=0;i<rv.size();i++)
    {
        sort(rv[i].words.begin(),rv[i].words.end());
    }
    while(cin>>t)
    {
        sort(t.begin(),t.end());
        int i;
        for(i=0;i<rv.size();i++)if(rv[i].words==t){ans.push_back(v[i]);break;}
    }
    sort(ans.begin(),ans.end(),cmp);
    for(int i=0;i<ans.size();i++)
    {
        if(i>0)cout<<' ';
        cout<<ans[i].words;
    }
    return 0;
}
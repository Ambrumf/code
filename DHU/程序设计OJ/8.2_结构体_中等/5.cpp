#include <bits/stdc++.h>
using namespace std;
struct man
{
    string name;
    int h;
    int w;
};
bool cmp(man a,man b)
{
    if(a.h!=b.h)return a.h<b.h;
    return a.w<b.w;
}
int main()
{
    vector<man> v,ans;
    int n;
    scanf("%d",&n);
    while(n--)
    {
        string a;
        int b,c;
        cin>>a>>b>>c;
        man tmp={a,b,c};
        v.push_back(tmp);
    }
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    for(int i=0;i<v.size();i++)
    {
        if(a<=v[i].h &&v[i].h<=b && c<=v[i].w && v[i].w<=d)ans.push_back(v[i]);
    }
    if(ans.empty())cout<<"No"<<endl;
    else {
        sort(ans.begin(),ans.end(),cmp);
        for(auto x:ans)cout<<x.name<<' '<<x.h<<' '<<x.w<<endl;
    }
    
    return 0;
}
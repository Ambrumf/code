#include<bits/stdc++.h>
using namespace std;
struct bike
{
    string type;
    string color;
    string md;
};
bool cmp(bike a,bike b)
{
    return a.type<b.type;
}
int main()
{
    string s[20];
    string t,a,b;
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        vector<bike> v;
        int flag=0;
        for(int i=0;i<n;i++)cin>>s[i];
        cin.get();
        while(m--)
        {

            cin>>t>>a>>b;
            bike tmp={t,a,b};
            for(int i=0;i<n;i++)if(s[i]==t){v.push_back(tmp);break;}
        }
        sort(v.begin(),v.end(),cmp);
        if(v.empty())cout<<"Not found!"<<endl;
        else for(int i=0;i<v.size();i++){cout<<v[i].type<<' '<<v[i].color<<' '<<v[i].md<<endl;}
    }
    return 0;

    
}
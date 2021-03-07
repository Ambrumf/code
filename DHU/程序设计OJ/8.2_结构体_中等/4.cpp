#include <bits/stdc++.h>
using namespace std;
struct student
{
    string name;
    string num;
    string gender;
};
int main()
{
    int n;
    cin>>n;
    vector<student> v;
    while(n--)
    {
        string a,b,c;
        cin>>a>>b>>c;
        student tmp={a,b,c};
        v.push_back(tmp);
    }
    int m;
    cin>>m;
    while(m--)
    {
        string t1,t2;
        string a,b;
        cin>>a>>b;
        for(int i=0;i<v.size();i++)
        {
            if(v[i].name==a || v[i].num==a)t1=v[i].gender;
            if(v[i].name==b || v[i].num==b)t2=v[i].gender;
        }
        if(t1!=t2)cout<<"Y"<<endl;
        else cout<<"N"<<endl;
        
    }
    
    return 0;
}
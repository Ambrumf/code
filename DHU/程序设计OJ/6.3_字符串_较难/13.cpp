#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,t;
    getline(cin,a);
    cin>>t;
    if(t=="D")
    {
        char s;
        cin>>s;
        auto it=find(a.begin(),a.end(),s);
        if(it!=a.end()){
            a.erase(it);
            cout<<a;
        }
        else cout<<"指定字符不存在";
    }
    else if(t=="I")
    {
        char x,y;
        int pos;
        cin>>x>>y;
        for(pos=a.size();pos>-1;pos--)if(a[pos]==x)break;
        if(pos==-1)cout<<"指定字符不存在";
        else {a.insert(pos,1,y);
        cout<<a;}
    }
    else 
{
        string x,y;
        cin>>x>>y;
        auto pos=a.find(x);
        if(pos!=-1){
        while(pos!=-1)
        {
            a.replace(pos,1,y);
            pos=a.find(x);
        }
        cout<<a;
        }
        else cout<<"指定字符不存在";
}
    return 0;
}
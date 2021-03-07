#include <bits/stdc++.h>
using namespace std;
    struct let{
        char c;
        int sum;
    };
bool cmp(let a,let b)
{
    if(a.sum != b.sum) return a.sum > b.sum;
    return a.c < b.c;
}
int main()
{

    string temp;
    while(getline(cin,temp)){
        for(auto x=temp.begin();x!=temp.end();x++)if(*x>='a' && *x<='z') *x=toupper(*x);
        multiset<char> ms;
        set<char> s;
        for(auto x=temp.begin();x!=temp.end();x++)if(*x>='A' && *x<='Z'){
            ms.insert(*x);
            s.insert(*x);
        }
        vector<let> v;
        for(auto x:s){
            let t;
            t.c=x;
            t.sum=ms.count(x);
            v.push_back(t);
        }
        sort(v.begin(),v.end(),cmp);
        for(auto x:v)
        {
            cout<<x.c<<' '<<x.sum<<endl;
        }
        cout<<endl;
    }
    return 0;
}

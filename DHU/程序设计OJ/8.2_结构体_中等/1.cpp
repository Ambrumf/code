#include <bits/stdc++.h>
using namespace std;
    struct pep{
        string name;
        int year;
        int month;
        int date;
    };
bool cmp(pep a, pep b){
    if(a.month!=b.month)return a.month<b.month;
    return a.date<b.date;
}
int main()
{
    int T;
    cin>>T;
    vector<pep> v;
    while(T--){
        string t;
        int t1,t2,t3;
        cin>>t;
        scanf("%d%d%d",&t1,&t2,&t3);
        pep temp={t,t1,t2,t3};
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),cmp);
    for(auto x:v){
        cout<<x.name<<' '<<setfill('0')<<x.year<<'-'<<setw(2)<<x.month<<'-'<<setw(2)<<x.date<<endl;
    }
    return 0;
}

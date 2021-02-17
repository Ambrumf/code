#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,t;
    cin>>n;
    vector<int> a,b;
    while(n--){
        cin>>t;
        if(a.empty())a.push_back(t);
        else if(a.back()!=t)a.push_back(t);
        else b.push_back(t);
    }
    a.erase(unique(a.begin(),a.end()),a.end());
    b.erase(unique(b.begin(),b.end()),b.end());
    /*for(auto x:a)cout<<x<<' ';
    cout<<endl;
    for(auto x:b)cout<<x<<' ';*/
    cout<<a.size()+b.size();    
}

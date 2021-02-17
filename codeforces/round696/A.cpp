#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a[100000]={},b[100000]={},c[10000],na,nb,n;
        string ta,tb;
        cin>>na>>ta;
        for(int i=0;i<na;i++){
            a[i]=ta[na-1-i]-'0';
        }
        cin>>nb>>tb;
        for(int i=0;i<nb;i++){
            b[i]=tb[nb-1-i]-'0';
        }
        n=max(na,nb);
        for(int i=0;i<n;i++)c[i]=a[n-1-i]+b[n-1-i];
        vector<int> v;
        for(int i=0;i<n;i++)v.push_back(c[i]);
        unique(v.begin(),v.end());
        for(auto x:v)cout<<x;
        cout<<endl;
    }
    return 0;
}

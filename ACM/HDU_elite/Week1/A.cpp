#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;

int main()
{
    int n,m;
    while(cin>>n>>m){
        int  a,b;
        map<int,int> ma;
        vector<int> v;
        for(int i=1;i<=n;i++){scanf("%d",&a);if(!ma[a]){v.push_back(a);ma[a]=1;}}
        for(int i=1;i<=m;i++){scanf("%d",&b);if(!ma[b]){v.push_back(b);ma[b]=1;}}
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){cout<<v[i];if(i!=v.size()-1)cout<<' ';}
        cout<<endl;
    }
    return 0;
}

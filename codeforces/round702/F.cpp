#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;

void solve(){
    int n,aa[200005],mx=-1e9,t,cal[200005],mm=inf;
    cin>>n;
    vector<int> v,V;
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        aa[t]++;
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    for(int i=0;i<v.size();i++){
        cal[aa[v[i]]]++;
        V.push_back(aa[v[i]]);
    }
    sort(V.begin(),V.end());
    V.erase(unique(V.begin(),V.end()),V.end());
    //for(auto x:V)cout<<x<<' '<<cal[x]<<endl;
    for(int i=0;i<V.size();i++){
        int sum=0;
        for(int j=0;j<i;j++)sum+=cal[V[j]];
        for(int j=i+1;j<V.size();j++)sum+=cal[V[j]]*(V[j]-V[i]);
        mm=min(sum,mm);
        //cout<<"V[i]:"<<V[i]<<' '<<"sum:"<<sum<<endl;
    }
    cout<<mm<<endl;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}
/*
3
6
1 3 2 1 4 2
4
100 100 4 100
8
1 2 3 3 3 2 6 6
outputCopy
2
1
2
*/

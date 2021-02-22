#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;
vector<int> v,V;
map<int,int>m;
bool check(int x,int mx){
    int sum=v[x];
    for(int i=0;i<v.size();i++){
        if(v[i]!=v[x])if(sum>=v[i])sum+=m[v[i]];
                    else return 0;
        else sum+=m[v[i]]-v[x];
    }
    if(sum>=mx) return 1;
    return 0;
}
void solve(){
    int n,t,cnt=0;
    cin>>n;
    v.clear();
    map<int,int> s;
    m=s;
    for(int i=0;i<n;i++){scanf("%d",&t);v.push_back(t);m[t]+=t;}
    V=v;
    sort(v.begin(),v.end());
    int mx=v.back();
    v.erase(unique(v.begin(),v.end()),v.end());
    int l=0,r=v.size()-1,mid;
    //for(int i=0;i<=3;i++)cout<<check(i,mx)<<' ';
    //return;
    while(l<r){
        mid=(l+r)/2;
        if(check(mid,mx))r=mid;
        else l=mid+1;
    }
    //cout<<l<<' '<<r<<endl;
    for(int i=0;i<n;i++)if(V[i]>=v[l])cnt++;
    cout<<cnt<<endl;
    for(int i=0;i<n;i++)if(V[i]>=v[l])cout<<i+1<<' ';
    cout<<endl;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}
/*
inputCopy
2
4
1 2 4 3
5
1 1 1 1 1
outputCopy
3
2 3 4 
5
1 2 3 4 5 
*/

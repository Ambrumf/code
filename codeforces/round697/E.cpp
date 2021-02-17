#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fun(ll x){
    ll sum=1;
    for(ll i=1;i<=x;i++){sum*=i;sum%=(int)1e9+7;}
    return sum;
}
void solution(){
    multiset<int> s;
    vector<int> v;
    int n,k,tmp;
    scanf("%d %d",&n,&k);
    while(n--){
        scanf("%d",&tmp);
        s.insert(tmp);
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    int r=v.size()-1;
    while(s.count(v[r])<=k){
        k-=s.count(v[r]);
        r--;    
    }
    if(k==0)cout<<1<<endl;
    else {
        int a=s.count(v[r]);
        //cout<<a<<' '<<k<<endl;
        double sum=fun(a)/fun(a-k)/fun(k);
        cout<<(ll)sum<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)solution();
    return 0;
}
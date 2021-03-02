#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;
int fun(vector<int> v,vector<int> p){
    map<int,int> m;
    int ans=-1e9,suf[200005];
    for(int i=0;i<v.size();i++)m[i]=1;
    suf[p.size()]=0;
    for(int i=p.size()-1;i>=0;i++){
        suf[i]=suf[i+1];
        if(m[i])suf[i]++;
    }
    int pre[200005]={},space[200005]={};
    int j=0,k=0;
    for(int i=1;i<=v.size();i++){
        pre[i]=pre[i-1];if(j<v.size() && i==v[j]){pre[i]++;j++;}
    }
    for(int i=1;i<p.size();i++){
        space[i]=space[i-1];if(k<p.size() && i==p[k]){space[i]++;j++;}
    }
    for(int i=0;i<p.size();i++){
        int x=p[i]-pre[i];
        int l=0,r=p.size(),mid;
        while(l<r){
            mid=l+(r-l)/2;
            if(p[mid]>x)r=mid;
            else l=mid+1;
        }
        int pos=l;
        int tmp=space[p[i]]-space[p[pos]-1]+suf[p[i]];
        if(m[p[i]])tmp--;
        ans=max(ans,tmp);
        return ans;
    }

}
void solve(){
    int n,m;
    vector<int> p,q,aa,bb;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        if(t<0)p.push_back(-t);
        else q.push_back(t);
    }
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        if(t<0)aa.push_back(-t);
        else q.push_back(t);
    }
    reverse(p.begin(),p.end());
    reverse(aa.begin(),aa.end());
    int ans=fun(p,aa)+fun(q,bb);
    cout<<ans<<endl;
}
int main()
{
    cin.tie(0);
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}

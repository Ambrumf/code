
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n,t,k,flag=0;
    cin>>n>>k;
    vector<int> aa,bb;
    for(int i=0;i<n;i++){
        cin>>t;
        aa.push_back(t);
    }
    for(int i=0;i<n;i++){
        cin>>t;
        bb.push_back(t);
    }
    sort(aa.begin(),aa.end());
    sort(bb.rbegin(),bb.rend());
    for(int i=0;i<n;i++){
        if(aa[i]+bb[i]>k){cout<<"NO"<<endl;flag=1;break;}
    }
    if(!flag)cout<<"YES"<<endl;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}

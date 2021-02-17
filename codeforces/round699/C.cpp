#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n,m,aa[200000],bb[200000],ned[200000]={},have[200000]={},appear[200000]={},color[200000]={},mnop=-1,myesp=0;
    vector<int> v;
    map<int,vector<int> > mm;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>aa[i];
    }
    for(int i=0;i<n;i++){
        cin>>bb[i];
        appear[bb[i]]++;
        if(bb[i]!=aa[i]){
            if(!ned[bb[i]])v.push_back(bb[i]);
            ned[bb[i]]++;
        }
        mm[bb[i]].push_back(i);
    }
    for(int i=0;i<m;i++){
        cin>>color[i];
        have[color[i]]++;
        if(!appear[color[i]])mnop=i;
        if(appear[color[i]])myesp=i;
    }
    int flag=1;
    //cout<<v.size();
    for(int i=0;i<v.size();i++){
        if(have[v[i]]<ned[v[i]]){flag=0;break;}
        //cout<<v[i]<<" "<<have[v[i]]<<" "<<ned[v[i]]<<endl;
    }
    //cout<<mnop<<' '<<myesp<<endl;
    if(flag && myesp>mnop){
        cout<<"YES\n";
        for(int i=0;i<m;i++){
            int x=color[i];
            if(!appear[x])cout<<aa[mnop]<<' ';
            else if(mm[x].size()!=1){
                int tmp=mm[x].back();
                if(tmp==aa[mnop])swap(mm[x].back(),*(mm[x].end()-2));
                cout<<mm[x].back();
                mm[x].pop_back();
            }
            else cout<<mm[x].back();
            if(i!=m-1)cout<<' ';
            cout<<endl;
        }
    }
    else cout<<"NO\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}

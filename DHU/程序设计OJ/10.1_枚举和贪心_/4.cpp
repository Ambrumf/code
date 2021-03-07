#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll m,n;
    cin>>m;
    while(m--)
    {
        vector<pair<ll,ll> > v;
        cin>>n;
        ll cube;
        while(n--){
            ll a,b;
            cin>>a>>b;
            v.push_back(make_pair(a,b));
        }
        int flag=0;
        for(int i=0;i<v.size();i++){if(v[i].first>=v[i].second){cube=v[i].first;v.erase(v.begin()+i);flag=1;break;}}
        //cout<<endl<<v.size()<<' '<<cube<<endl;
        if(!flag){cout<<"NO"<<endl;continue;}
        while(!v.empty())
        {
            if(flag==0)break;
            flag=0;
            for(auto it=v.begin();it<v.end();it++)
            {
                if(it->first+cube>=it->second){cube+=it->first;it=v.erase(it)-1;flag=1;}
            }
        } 
        if(v.empty())cout<<"YES";
        else cout<<"NO";
        cout<<endl;  
    }
    return 0;
}

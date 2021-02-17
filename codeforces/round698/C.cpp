    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    ll aa[200000];
    void solve(){
        ll n,flag=0;
        scanf("%lld",&n);
        vector<ll> v;
        map<ll,ll> m;
        for(int i=0;i<2*n;i++){
            ll tmp;
            scanf("%lld",&tmp);
            v.push_back(tmp);
            m[tmp]++;
        }
        for(int i=0;i<2*n;i++)if(m[v[i]]!=2){cout<<"NO"<<endl;flag=1;return;}
        sort(v.rbegin(),v.rend());
        v.erase(unique(v.begin(),v.end()),v.end());
        if(v.front()%(2*n)!=0){cout<<"NO"<<endl;flag=1;return;}
        aa[0]=v.front()/(2*n);
        for(int i=1;i<n;i++){
            ll sum=v[i-1]-(2*n-2*i)*aa[i-1];
            if((v[i]-sum)%(2*n-2*i)!=0){cout<<"NO"<<endl;flag=1;return;}
            aa[i]=(v[i]-sum)/(2*n-2*i);
            if(aa[i]>=aa[i-1] || aa[i]<=0){cout<<"NO"<<endl;flag=1;return;}
        }
        cout<<"YES"<<endl;
    }
    int main()
    {
        int T;
        cin>>T;
        while(T--)solve();
        return 0;
    }

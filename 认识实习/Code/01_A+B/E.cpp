    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    #define inf 0x3f3f3f3f;

    void solve(){
        int n,t,sum;
        while(cin>>n){
            sum=0;
            while(n--){cin>>t;sum+=t;}
            cout<<sum<<endl;
        }
    }
    int main()
    {
        int t;
        scanf("%d",&t);
        while(t--)solve();
        return 0;
    }

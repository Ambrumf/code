    #define _CRT_SECURE_NO_WARNINGS
    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    int ans[30000010]={};
    int pre[30000010]={};
    int main()
    {
        for(ll c=1;c<=30000010;c++){
                for(ll a=2*c;a<=30000010;a+=c)if((a xor a-c) == c)ans[a]++;
        }
        for(int i=1;i<=30000010;i++){
            pre[i]=pre[i-1]+ans[i];
        }
        int T;
        cin>>T;
        for(int i=1;i<=T;i++){
            ll n;
            scanf("%lld",&n);
            printf("Case %d: %d\n",i,pre[n]);
        }
        return 0;
    }

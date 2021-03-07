    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    #define inf 0x3f3f3f3f;

    void solve(){
        ll p,a,b,c;
        ll pa,pb,pc;
        scanf("%lld %lld %lld %lld",&p,&a,&b,&c);
        pa=((p-1)/a+1)*a-p;pb=((p-1)/b+1)*b-p;pc=((p-1)/c+1)*c-p;
        ll ans=min(min(pa,pb),pc);
        cout<<ans<<endl;
    }
    int main()
    {
        int t;
        scanf("%d",&t);
        while(t--)solve();
        return 0;
    }/*
    inputCopy
    4
    9 5 4 8
    2 6 10 9
    10 2 5 10
    10 9 9 9
    outputCopy
    1
    4
    0
    8
    */
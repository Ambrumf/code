    #define _CRT_SECURE_NO_WARNINGS
    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    int prime[1000000];
    bool isprime[1000006];
    int k=0,ans;
    ll a,b,tmp;
    void fun(){
        for(int i=1;i<=k && prime[i]*prime[i]<tmp;i++){
            int ek=0;
            if(tmp%prime[i]==0){
                while(tmp%prime[i]==0){
                    tmp/=prime[i];
                    ek++;
                }
            }
            ans*=(1+ek);
            //cout<<ans<<endl;
        }
        if(tmp>1)ans*=2;
    }
    int main()
    {
        for(int i=2;i<=1000000;i++){
            if(!isprime[i])prime[++k]=i;
            for(int j=1;j<=k && (ll)prime[j]*i<1000000;j++){
                isprime[prime[j]*i]=1;
                if(i%prime[j]==0)break;
            }
        }
        int T;
        scanf("%d",&T);
        for(int ca=1;ca<=T;ca++){
            scanf("%lld %lld",&a,&b);
            if(b*b>a)printf("Case %d: 0\n",ca);
            else {
                ans=1;
                tmp=a;
                fun();
                ans/=2;
                for(int i=1;i<b;i++){
                    if(a%i==0)ans--;
                }
                printf("Case %d: %d\n",ca,ans);
            }
        }
        return 0;
    }

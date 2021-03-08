#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int aa[1000005];
int n;
int fstpow(ull a,ull b,int p){
    a%=p;
    ull ans=1;
    while(b){
        if(b%2==1)ans=ans*a%p;
        b/=2;
        a=a*a%p;
    }
    return (int)ans;
}
void solve(){
    ull a,b;
    int loop=1;
    cin>>a>>b;
    cin>>n;
    aa[0]=0;aa[1]=1%n;
    for(int i=2;1;i++){
        aa[i]=(aa[i-1]+aa[i-2])%n;
        if(aa[i]==aa[1] && aa[i-1]==aa[0]){loop=i-1;break;}
    }
    cout<<aa[fstpow(a,b,loop)]<<endl;
}
int main()
{
    //freopen("data.in","r",stdin);
    //freopen("wrong.out","w",stdout);
    int T;
    scanf("%d",&T);
    while(T--)solve();
    return 0;
}
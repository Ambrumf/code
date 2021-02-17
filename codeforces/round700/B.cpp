#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll A,B,n,a[100001],b[100001],times,sumhp=0,mmax=-1e6;
    cin>>A>>B>>n;
    for(int i=0;i<n;i++){cin>>a[i];mmax=max(mmax,a[i]);}
    for(int i=0;i<n;i++){
        cin>>b[i];
        times=b[i]/A;
        if(b[i]%A)times++;
        sumhp+=a[i]*times;
    }
    //cout<<sumhp<<endl;
    if(B+mmax>=sumhp)cout<<"YES\n";
    else cout<<"NO\n";

}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}

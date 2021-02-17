#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n,aa[300],cnt=0,mmin,flag=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i==1){cin>>aa[i];mmin=aa[i];continue;}
        cin>>aa[i];
        if(aa[i]!=mmin)flag=1;
        if(aa[i]<mmin){
            mmin=aa[i];
        }
    }
    if(!flag)cout<<0<<endl;
    else {
        for(int i=1;i<=n;i++)if(aa[i]==mmin)cnt++;
        cout<<n-cnt<<endl;
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n,a,b;
    cin>>n>>a>>b;
    string t;
    cin>>t;
    int aa[200005];
    for(int i=0;i<t.size();i++)if(t[i]=='1'){aa[i]=1;aa[i+1]=1;}
    if(a>b){
        int l=-1,r=-1;
        for(int i=0;i<t.size();i++)if(t[i]=='1'){l=i;break;}
        for(int i=t.size()-1;i>-0;i--)if(t[i]=='1'){r=i;break;}
        ll asum=0,bsum=0;
        asum=a*(t.size()+1+ (l=-1?0:(r-l+1)) );
        if(l==-1)bsum=b*(t.size()+1);
        else bsum=b*(t.size()+2);
        cout<<asum+bsum<<endl;
    }
    else {
        int pre=0,flag=0;
        ll pcnt;
        for(int i=0;i<t.size();i++){
            if(t[i]=='1')aa[i]=aa[i+1]=1;
            if(t[i]=='1'){
                
            }
        }

    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}

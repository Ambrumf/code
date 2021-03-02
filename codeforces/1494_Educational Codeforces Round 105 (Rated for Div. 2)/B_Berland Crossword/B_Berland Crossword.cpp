#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;

void solve(){
    int n,ur,dr,dl,ul,R,D,U,L,ok=0;
    cin>>n>>U>>R>>D>>L;
    int dir[2]={0,1};
    for(int a=0;a<2;a++)for(int b=0;b<2;b++)for(int c=0;c<2;c++)for(int d=0;d<2;d++){
        ur=dir[a];
        dr=dir[b];
        dl=dir[c];
        ul=dir[d];
        if(ur+ul<=U && ur+ul+n-2>=U && ul+dl<=L && ul+dl+n-2>=L && ur+dr<=R && ur+dr+n-2>=R && dl+dr<=D && dl+dr+n-2>=D)ok=1;
    }
    if(ok)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}

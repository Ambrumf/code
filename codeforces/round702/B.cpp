#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;

int dis(int i,int p){
    int k=0;
    while(i!=p){
        i=(i+1)%3;
        k++;
    }
    return k;
}
void solve(){
    int n,num,cnt[3]={},ans=0,aa[30005];
    cin>>n;
    num=n/3;
    for(int i=0;i<n;i++){
        scanf("%d",&aa[i]);
        cnt[aa[i]%3]++;
    }
    int a,b,c,pos,mod=0;
    for(int i=0;i<3;i++)if(cnt[i]<n/3)mod++;
    //cout<<"mod:"<<mod<<endl;
    //for(auto x:cnt)cout<<x<<' ';
    cout<<endl;
    if(mod==1){
        int p;
        for(int i=0;i<3;i++)if(cnt[i]<n/3)p=i;
        for(int i=0;i<3;i++)if(cnt[i]>n/3)ans+=(cnt[i]-n/3)*dis(i,p);
    }
    else if(mod==2){
        int p;
        for(int i=0;i<3;i++)if(cnt[i]>n/3)p=i;
        for(int i=0;i<3;i++)if(cnt[i]<n/3){ans+=(n/3-cnt[i])*dis(p,i);}
    }
    cout<<ans<<endl;
        
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}
/*
inputCopy
4
6
0 2 5 5 4 8
6
2 0 2 1 0 0
9
7 1 3 4 2 10 3 9 6
6
0 1 2 3 4 5
outputCopy
3
1
3
0
*/
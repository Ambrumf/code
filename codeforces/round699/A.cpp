#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    string t;
    int x1=0,x2=0,y1=0,y2=0,px,py;
    scanf("%d %d",&px,&py);
    cin>>t;
    for(int i=0;i<t.size();i++){
        if(t[i]=='U')y2++;
        if(t[i]=='D')y1--;
        if(t[i]=='R')x2++;
        if(t[i]=='L')x1--;
    }
    //cout<<x1<<' '<<x2<<' '<<y1<<' '<<y2<<endl;
    if(x1<=px && x2>=px && y1<=py && y2>=py)cout<<"YES\n";
    else cout<<"NO\n";
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}

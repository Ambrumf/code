#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;

void solve(){
    int tp[2]={0,1};
    string t;
    int aa[55];
    cin>>t;
    for(int a=0;a<2;a++)
        for(int b=0;b<2;b++)
            for(int c=0;c<2;c++){
            for(int k=0;k<t.size();k++){
                if(t[k]=='A')aa[k]=tp[a];
                if(t[k]=='B')aa[k]=tp[b];
                if(t[k]=='C')aa[k]=tp[c];
            }
            //for(int i=0;i<t.size();i++)cout<<aa[i];
            //cout<<endl;
            stack<int> s;
            int flag=1;
            for(int i=0;i<t.size();i++){
                if(aa[i]==1)s.push(1);
                if(aa[i]==0){
                    if(s.empty()){flag=0;break;}
                    else s.pop();
                }    
            }
            if(s.empty() && flag){cout<<"YES"<<endl;return;}
            }
    cout<<"NO"<<endl;
    return;
}
int main()
{
    cin.tie(0);
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}

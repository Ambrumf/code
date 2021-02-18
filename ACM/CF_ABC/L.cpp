#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int room[10]={};
    int n;
    cin>>n;
    string t;
    cin>>t;
    for(int i=0;i<n;i++){
        if(t[i]=='L'){for(int j=0;j<10;j++)if(room[j]==0){room[j]=1;break;}}
        else if(t[i]=='R'){for(int j=9;j>=0;j--)if(room[j]==0){room[j]=1;break;}}
        else room[t[i]-'0']=0;
    }
    for(int i=0;i<10;i++)cout<<room[i];

}
int main()
{
    solve();
    return 0;
}

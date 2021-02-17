#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    string t;
    cin>>t;
    for(int i=0;i<t.size();i++){
        if(i%2==0){
            if(t[i]=='a')t[i]='b';
            else t[i]='a';
        }
        else if(t[i]=='z')t[i]='y';
            else t[i]='z';
    }
    cout<<t<<endl;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}

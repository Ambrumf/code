#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n,k,cnt=0;
    cin>>n>>k;
    string t;
    for(int i=0;i<n/2;i++){
        if(t[i]==t[n-1-i])cnt++;
        else break;
    }
    if(k<=cnt)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)solve();
    return 0;
}

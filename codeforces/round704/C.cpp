#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;

int main()
{
    int n,m,mx[30]={},mn[30]={},ans=-1e9,vis[30]={};
    memset(mx,-100000,sizeof(mx));
    memset(mn,100000,sizeof(mn));
    string a,b;
    cin>>n>>m;
    cin>>a>>b;
    for(int i=0;i<n;i++){
        mx[a[i]-'a']=max(mx[a[i]-'a'],i);
        mn[a[i]-'a']=min(mn[a[i]-'a'],i);
    }
    for(int i=0;i<m-1;i++)
        ans=max(ans,(mx[b[i+1]-'a']-mn[b[i]-'a']) ) ;
    cout<<ans;
    return 0;
}
/*
inputCopy
5 3
abbbc
abc
outputCopy
3
inputCopy
5 2
aaaaa
aa
outputCopy
4
inputCopy
5 5
abcdf
abcdf
outputCopy
1
inputCopy
2 2
ab
ab

outputCopy
1
8 2
bbbbaaaa
ab
7 4
aabbadc
aacd

caaabbababbcbabbccbbaacc

abccabbcaa


if(mx[b[i+1]-'a']>mn[a[i]-'a'])
        else ans=max(ans,(mn[a[i]-'a'])-mx[b[i+1]-'a'] )
*/
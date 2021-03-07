#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int m1[26]={},m2[26]={};
    string t1,t2;
    cin>>t1>>t2;
    for(auto &x:t1)if(x>='a' && x<='z')x-=32;
    for(auto x:t1)m1[x-65]++;
    for(auto &x:t2)if(x>='a' && x<='z')x-=32;
    for(auto x:t2)m2[x-65]++;
    int flag=0;
    for(int i=0;i<26;i++)if(m1[i]!=m2[i])flag=1;
    if(flag)cout<<'N';
    else cout<<'Y';
    return 0;
}

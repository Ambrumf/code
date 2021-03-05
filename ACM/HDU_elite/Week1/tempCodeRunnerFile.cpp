#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;

int main()
{
    int n;
    while(cin>>n){
    map<string,int> m;
    int cnt=0;
    while(n--){
        string t;
        cin>>t;
        if(!m[t]){cnt++;m[t]=1;}
    }
    cout<<cnt<<endl;
    }
    return 0;
}

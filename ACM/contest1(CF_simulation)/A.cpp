#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;

int main()
{
    int n;
    cin>>n;
    string t;
    cin>>t;
    int cnt=0;
    for(int i=0;i<n-1;i+=2){
        if(t[i]==t[i+1]){
            cnt++;
            if(t[i]=='a')t[i]='b';
            else t[i]='a';
        }
    }
    cout<<cnt<<endl<<t;
    return 0;
}

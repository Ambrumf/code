#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    //freopen("data.out","w",stdout);
    int n,m;
    cin>>n;
    map<string,string> ma;
    while(n--){
        string a,b;
        cin>>a;
        cin.get();
        getline(cin,b);
        ma[a]=b;
    }
    //for(auto x:ma)cout<<x.second<<' '<<endl;
    cin>>m;
    while(m--){
        string t;
        while(cin>>t){
            if(ma[t]=="")cout<<t;
            else cout<<ma[t];
            char c=cin.get();
            if(c==' ')cout<<c;
            else {cout<<endl;break;}
        }
    }
    return 0;
}
/*
8
g2g got to go
g good
c see
l8 late
l8r later
d i am done
u you
r are
6
hi
how r u
you tell me
you are l8
d
c u l8r
*/

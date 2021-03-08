#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int Rand(int l,int r){return rand()%(r-l+1)+l;}
int main()
{
    freopen("data.in","w",stdout);
    srand((unsigned)time(NULL));
    ull a,b,c,t;
    t=Rand(100,200);
    cout<<t<<endl;
    for(int i=1;i<=t;i++){
        a=rand()*rand()*rand()*rand();
        b=rand()*rand()*rand()*rand();
        c=Rand(1,1000);
        if(a<0)a=-a;
        if(b<0)b=-b;
        cout<<a<<' '<<b<<' '<<c<<endl;
    }
    return 0;
}

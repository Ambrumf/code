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
    //cout<<t<<endl;
    for(int i=1;i<=t;i++){
        a=rand();
        if(a<0)a=-a;
        cout<<a<<endl;
    }
    cout<<0;
    return 0;
}

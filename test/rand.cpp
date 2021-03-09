#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int Rand(int l,int r){return rand()%(r-l+1)+l;}
void s(){
    for(int i=1;i<=3;i++){
        char a='a'+Rand(0,25);
        cout<<a;
    }
    cout<<' ';
}
int main()
{
    freopen("data.in","w",stdout);
    srand((unsigned)time(NULL));
    int a,b,c;
    int t=Rand(100,300);
    while(t--){
    a=Rand(6,200);
    b=Rand(6,200);
    c=Rand(6,200);
    cout<<a<<' '<<b<<' '<<c<<endl;
    for(int i=1;i<=a;i++)s();
    cout<<endl;
    for(int i=1;i<=b;i++)s();
    cout<<endl;
    for(int i=1;i<=c;i++)s();
    cout<<endl;
    }
    return 0;
}

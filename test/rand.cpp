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

    int t=Rand(500,400)*Rand(960,980);
    cout<<t<<endl;
    for(int i=1;i<=t;i++){
        int a=Rand(1,6);
        if(a==1)cout<<4;
        else if(a==2)cout<<8;
        else if(a==3)cout<<15;
        else if(a==4)cout<<16;
        else if(a==5)cout<<23;
        else cout<<42;
        //printf("42 ");
        cout<<' ';
    }
    return 0;
}

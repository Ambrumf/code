#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int Rand(int l,int r){return rand()%(r-l+1)+l;}
void s(){
    for(int i=1;i<=Rand(0,25);i++){
        char a='A'+Rand(0,25);
        cout<<a;
    }
    cout<<' ';
}
int main()
{
    freopen("data.in","w",stdout);
    srand((unsigned)time(NULL));
    int t=Rand(350,400);
    for(int i=1;i<=t;i++){
        int a=Rand(0,25);
        for(int j=0;j<a;j++){s();printf(" ");}
        printf("\n");
    }
    return 0;
}

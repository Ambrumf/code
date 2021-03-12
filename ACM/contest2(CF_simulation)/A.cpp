#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    while(cin>>n){
        int cnt=0,a=0,b=0,c=0;
        while(n%2==0){
            n/=2;
            a++;
        }
        while(n%3==0){
            n/=3;
            b++;
        }
        while(n%5==0){
            n/=5;
            c++;
        }
        cnt=a+b*2+c*3;
        if(n!=1)printf("-1\n");
        else printf("%d\n",cnt);
    }
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)solve();
    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod=10001;
int main()
{
    //int a=1096,b=8905,x;
    //while(cin>>x){
    //    cout<<(a*x+b)%mod<<endl;
    //}
    int n;
    cin>>n;
    int aa[101],a,b;
    for(int i=1;i<=n;i++)cin>>aa[i];
    for( a=0;a<=10000;a++){
        int flag=1;
        int m=(a*a%mod*aa[1]-aa[2])%mod;
        for(int i=2;i<n;i++){
            if((a*a%mod*aa[i]-aa[i+1])%mod!=m){flag=0;break;}
        }
        if(!flag)continue;
        int k=1;
        while(k<10000 && (mod*k-m)%(a+1)!=0)k++;
        if(k==10000)continue;
        if((mod*k-m)/(a+1)<=10000){b=(mod*k-m)/(a+1);break;}
    }
    //cout<<a<<' '<<b;
    for(int i=1;i<=n;i++)cout<<(aa[i]*a%mod+b)%mod<<endl;
    return 0;
}
/*
17
1507
822
9136
3014
7124
*/
#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod=20090126;
ll f[201][201],C[201][201],A[201];
void calA(){
    A[1]=A[0]=1;
    for(ll i=2;i<=200;i++)A[i]=A[i-1]*i%mod;
}
void calc(){
    for(int i=0;i<=200;i++)
        for(int j=0;j<=i;j++){
            if(j==0 || j==i)C[i][j]=1;
            else C[i][j]=(C[i-1][j]+C[i-1][j-1])%mod;
        }
}
void calf(){
    for(int i=2;i<=200;i++)for(int j=1;j<=i/2;j++)f[i][j]=C[i][2]*C[i-j-1][j-1]%mod;
}
void solve(){
    int n;
    cin>>n;
    //ll sum=A[n];
    ll sum=0;
    for(int i=2;i<=2;i++)for(int j=1;j<=i/2;j++)sum=(sum+(A[n-i+j]*f[i][j])%mod*C[n][i]%mod)%mod;
    cout<<sum<<endl;
}
int main()
{
    calA();
    calc();
    calf();
    cout<<C[3][2]<<endl;
    cout<<f[2][1]<<endl;
    cout<<f[3][1]<<endl;
    int T;
    scanf("%d",&T);
    while(T--)solve();
    return 0;
}

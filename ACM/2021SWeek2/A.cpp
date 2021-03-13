#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll c[5001][5001],f[21];
void solve(){
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%lld\n",c[n][m]*f[m]);
}
int main()
{
    for(int i=1;i<=5000;i++){
        for(int j=0;j<=i;j++){
            if(j==i || j==0)c[i][j]=1;
            else c[i][j]=c[i-1][j]+c[i-1][j-1];
        }
    }
    f[1]=0;
    f[2]=1;
    for(int i=3;i<=20;i++){
        f[i]=(i-1)*(f[i-1]+f[i-2]);
    }
    int T;
    scanf("%d",&T);
    while(T--)solve();
    return 0;
}

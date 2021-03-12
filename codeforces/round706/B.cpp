#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int aa[100005];
void solve(){
    map<int,int> m;
    int n,k,a=-1e9;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&aa[i]);
        m[aa[i]]=1;
        a=max(a,aa[i]);
    }
    int i=0;
    for(i=0;i<n;i++){
        if(m[i]==0)break;
    }
    if(k==0)printf("%d\n",n);
    else if(i==n){printf("%d\n",n+k);}
    else {
        int b=i;
        if(m[((a+b)-1)/2+1])printf("%d\n",n);
        else printf("%d\n",n+1);
    }
}
int main()
{
    //freopen("data.in","r",stdin);
    //freopen("data.out","w",stdout);
    int T;
    scanf("%d",&T);
    while(T--)solve();
    return 0;
}
/*
5
4 1
0 1 3 4
3 1
0 1 4
3 0
0 1 4
3 2
0 1 2
3 2
1 2 3
*/

//m[i] -> m[aa[i]]
//i==n
//k==0
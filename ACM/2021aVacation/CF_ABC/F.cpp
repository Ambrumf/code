#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n,b,p,cb,cp,ans=0;
    scanf("%d %d %d",&n,&b,&p);
    scanf("%d %d",&cb,&cp);
    if(cb>cp){swap(cb,cp);swap(b,p);}
    int nb,np;
    n/=2;
    np=min(n,p);
    ans+=cp*np;
    if(n>p){nb=min(n-p,b);ans+=nb*cb;} 
    cout<<ans<<endl;
    
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}
/*
Input
3
15 2 3
5 10
7 5 2
10 12
1 100 100
100 100
Output
40
34
0*/

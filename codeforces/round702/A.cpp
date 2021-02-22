#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;
int fun(int x,int y){
    x--;
    int k=x/y;
    int sum=0;
    while(k){
        k/=2;
        sum++;
    }
    return sum-1;
}

void solve(){
    int n,aa[55],ans=0;
    cin>>n;
    for(int i=0;i<n;i++)cin>>aa[i];
    for(int i=0;i<n-1;i++){
        int x=aa[i],y=aa[i+1];
        if(x<y)swap(x,y);
        if(x/y<2 || x==2*y)continue;
        else ans+=fun(x,y);
    }
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
inputCopy
6
4
4 2 10 1
2
1 3
2
6 1
3
1 4 2
5
1 2 3 4 3
12
4 31 25 50 30 20 34 46 42 16 15 16
outputCopy
5
1
2
1
0
3
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int a,b,k;
    scanf("%d %d %d",&a,&b,&k);
    int l=max((double)0,(k+((double)b-a))/2+1);
    int ans=k-l+1;
    cout<<max(0,ans)<<endl;
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
4
5 3 4
2 1 0
3 5 5
4 10 6
Output
3
1
2
0
*/
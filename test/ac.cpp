
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<sstream>
#include<vector>
#include<map>
#include<queue>
#include<stack>
#include<set>
#include<cmath>
#define up(i, x, y) for(int i = x; i <= y; i++)
#define down(i, x, y) for(int i = x; i >= y; i--)
#define MAXN ((int)1e6 + 10)
#define INF 0x3f3f3f3f
using namespace std;
typedef unsigned long long ull;
int arr[MAXN];
int pow_mod(ull a, ull n, int m) //快速幂取模
{
    ull base = a, ans = 1;
    while(n)
    {
        if(n & 1){
            ans = ans * base % m;
        }
        base = base * base % m;
        n >>= 1;
    }
    return (int)(ans % m);
}
int solve(ull a, ull b, int n)
{
    int len = 1;
    for(int i = 2; 1 ; i++)
    {
        arr[i] = (arr[i - 1] + arr[i - 2]) % n;
        if(arr[i - 1] == arr[0] && arr[i] == arr[1]) {
            len = i - 1; //周期
            break;
        }
    }
    int loc = pow_mod(a % len, b , len); //位置
    return arr[loc];
}
int main()
{
    //freopen("data.in","r",stdin);
    //freopen("ac.out","w",stdout);
    int T; cin>>T;
    while(T--){
        ull a, b;
        int n;
        cin>>a>>b>>n;
        arr[0] = 0, arr[1] = 1 % n;
        cout<<solve(a, b, n)<<'\n';
    }
    return 0;
}
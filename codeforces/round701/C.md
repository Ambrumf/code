# 题目链接：https://codeforces.com/contest/1485/problem/C  
# 题解:  
$a/b=a$ $mod$ $b$ 等价于$a$可以表示成$a=bk+k(k<b)$的形式。易得k同时需满足$k<\sqrt{a}$。于是我们只需要计算k在$[1,\sqrt{a}]$范围内满足条件的不b的个数。
对于给定的k，当b的值不做限定时，b可取的最小值为$b=k+1$,最大值为$b=\frac{(a-k)}{k}$。实际上b的最大值为y。因此可以求出b的取值个数n与k的关系为n=max(0,min(b,(a-k)/k)-(k+1)+1)。  
# 代码：  
```cpp
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll a,b,sum=0;
    cin>>a>>b;
    for(int k=1;k<sqrt(a);k++)sum+=max(0ll,min(b,(a-k)/k)-(k+1)+1);
    cout<<sum<<endl;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}
```

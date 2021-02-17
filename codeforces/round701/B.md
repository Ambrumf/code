# 题目链接：https://codeforces.com/contest/1485/problem/B  
# 题解:  
生成k相似的序列有三种形式  
1. 改变下标为$l$的元素，此时1至$a[l]-1$之间的数皆符合。共有$a[l]-1$种。
2. 改变下标在$l,r$之间的元素，$a[l]，a[r]$之间的每个数，既可以替代刚好小于它的一个元素也可以替代刚好大于它的一个元素。共有$2*( (a[r]-a[l]+1)-(r-l+1) )$种
3. 改变下标为$r$的元素，此时$a[r]+1$至k之间的数皆符合。共有$k-a[r]$种。
   
对于任意给出的$r,l$，只需计算上述三种情况，就可求出所有可能的个数。
# 代码：  
```cpp
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll aa[500000],ans,n,q,k,l,r;
    ll sum[500000];
    cin>>n>>q>>k;
    for(int i=1;i<=n;i++)cin>>aa[i];
    while(q--){
        cin>>l>>r;
        ans=0;
        ans+=(aa[l]-1)+(k-aa[r]);
        ans+=2*((aa[r]-aa[l]+1)-(r-l+1));
        cout<<ans<<endl;
    }
    return 0;
}
```

 # C. Ball in Berland

At the school where Vasya is studying, preparations are underway for the graduation ceremony. One of the planned performances is a ball, which will be attended by pairs of boys and girls.

Each class must present two couples to the ball. In Vasya's class, 𝑎 boys and 𝑏 girls wish to participate. But not all boys and not all girls are ready to dance in pairs.

Formally, you know 𝑘 possible one-boy-one-girl pairs. You need to choose two of these pairs so that no person is in more than one pair.

For example, if $𝑎=3$, $𝑏=4$, $𝑘=4$ and the couples $(1,2)$, $(1,3)$, $(2,2)$, $(3,4)$ are ready to dance together (in each pair, the boy's number comes first, then the girl's number), then the following combinations of two pairs are possible (not all possible options are listed below):

 $(1,3)$ and $(2,2)$;
$(3,4)$ and $(1,3)$;
But the following combinations are not possible:

$(1,3)$ and $(1,2)$ — the first boy enters two pairs;
$(1,2)$ and $(2,2)$ — the second girl enters two pairs;
Find the number of ways to select two pairs that match the condition above. Two ways are considered different if they consist of different pairs.

## **Input**
The first line contains one integer $𝑡$ $(1≤𝑡≤10^4)$ — the number of test cases. Then $𝑡$ test cases follow.

The first line of each test case contains three integers $𝑎$, $𝑏$ and $𝑘$ $(1≤𝑎,𝑏,𝑘≤2⋅10^5)$ — the number of boys and girls in the class and the number of couples ready to dance together.

The second line of each test case contains $𝑘$ integers $𝑎1$,$𝑎2$,…$𝑎𝑘$. $(1≤𝑎𝑖≤𝑎)$, where 𝑎𝑖 is the number of the boy in the pair with the number $𝑖$.

The third line of each test case contains $𝑘$ integers $𝑏1$,$𝑏2$,…$𝑏𝑘$. $(1≤𝑏𝑖≤𝑏)$, where $𝑏𝑖$ is the number of the girl in the pair with the number $𝑖$.

It is guaranteed that the sums of $𝑎$, $𝑏$, and $𝑘$ over all test cases do not exceed 2⋅105.

It is guaranteed that each pair is specified at most once in one test case.

## **Output**
For each test case, on a separate line print one integer — the number of ways to choose two pairs that match the condition above.

## **Example**  
### **input**  
3 4 4  
1 1 2 3  
2 3 2 4  
1 1 1  
1  
1  
2 2 4  
1 1 2 2  
1 2 1 2  
### **output**
4  
0  
2  

## **题解**：  
题中男女同学和配对方式可以用二分图表示，将问题转换为由元素个数为a,b，弧的个数为k的二分图选取两条没有公共顶点的弧，求解共有多少种选法。

遍历图中的弧，先固定选取的第一条弧($a$,$b$)。第二条弧可取所有的k条弧中所有第一个顶点不为$a$，且第二个顶点不为$b$的弧。记$deg(n)$为顶点$n$拥有的弧的个数,$N$为顶点$n$拥有的弧的集合，则以弧($a$,$b$)为第一条弧共有$k-crad(A\bigcup B)$=$k-deg(a)-deg(b)+1$种选法。

计算所有弧的选法个数并累加。由于计算过程中每条弧被计算两次，所得结果除以2便得到答案。

## 代码
```cpp
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t,A,B,k,ans;
    cin>>t;
    while(t--){
        ans=0;
        scanf("%lld %lld %lld",&A,&B,&k);
        vector<ll> a(A+1),b(B+1);
        vector<pair<ll,ll> > v(k);
        for(int i=0;i<v.size();i++){
            scanf("%lld",&v[i].first);
            a[v[i].first]++;}
        for(int i=0;i<v.size();i++){
            scanf("%lld",&v[i].second);
            b[v[i].second]++;}
        for(int i=0;i<v.size();i++){
            ans+=k-a[v[i].first]-b[v[i].second]+1;
        }
        cout<<ans/2<<endl;
    }
    return 0;

}
```


## 知识点：

<br/>

模运算法则：
$a$ % $p+b$ % $p=(a+b)$ % $p$    
$(a*b)$ % $p=(a$ % $p)$ $*(b$ % $p)$

逆元：
若 $a*b$ &equiv; 1 $(mod$ p$)$;则称a为b模p意义下的乘法逆元

求逆元的方法：
费马小定理（求$a^{p-2}$ % $p$ ) , 扩展欧几里德算法，递推( inv[i]=(p-p/i)*inv[p%i]%p ) 

逆序对：
数组中若存在 $i<j$ 且 $a[i]>a[j]$ 则称 $<a[i],a[j]>$ 为数组a中的一对逆序对。

欧拉筛：
每个合数只在指针指向其因数中最大的合数时才被筛除，从而拥有$O(n)$的时间复杂度。

快速幂：
每轮运算底数平方，指数减半（指数为奇数多乘一次底数）。时间复杂度$O(log_2n)$

<br/>
<br/>
<br/>

# <center>D.【模板】乘法逆元2

## 题目链接：https://www.luogu.com.cn/problem/P3811?contestId=40622

## 题解：
前缀积，后缀积，逆元递推公式。题目难点在于在 $5*10^6$ 的数据规模下需要以 $O(n)$ 的时间复杂度求解。而题目给出的数据是在  $1～10^9$ 离散的，无法用递推公式求出给定范围内所有数据的逆元。于是想到将待求表达式中的分母$a_i$  转化为前i-1项的前缀积乘后n-i项的后缀积，再除以n项的前缀积的形式( $(pre[i-1] * suf[i+1]\over pre[n])$ )。由于每一项的前缀积和后缀积都可以线性递推求解，而且最终只需要对 $pre[n]$ 求逆元，算法的总时间复杂度为$O(n)$

## 反思：
做题目的时候没有考虑到可以对分式进行通分，减少求逆元的次数。可能是因为对于模运算，整数除法中的乘除运算规则不清楚，不敢往这方面想，然后纠结于如何以非递推的方法求出所有数据的逆元。

还有一个小细节没有注意到，最初求前缀积后缀积以及其他的乘除运算的代码是只在表达式的末尾取余，而题目给出p值远大于$10^6$求前缀积与后缀积的过程很可能爆int，需要用long long数据类型。


<details>
<summary>代码</summary>

```cpp
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=100000010;
int prime[60000100];
bool aa[N];
int main()
{
    int n,primenum=1,tmp,q;
    scanf("%d %d",&n,&q);
    for(int i=2;i<N;i++){
        if(!aa[i])prime[primenum++]=i;
        for(int j=1;j<primenum && i*prime[j]<N;j++){
            aa[i*prime[j]]=1;
            if(i%prime[j]==0)break;
        }
    }
    while(q--){
        scanf("%d",&tmp);
        printf("%d\n",prime[tmp]);
    }
    return 0;
}
```
</details>


<br/>
<br/>

# <center>E.【模板】线性筛素数

## 题目链接：https://www.luogu.com.cn/problem/P3383?contestId=40622

## 题解：
欧拉筛模版，原理是先默认所有数为质数，从2开始逐个筛除。筛除的思路是未被筛除的数标记为质数，放入质数表中。对于每个数，在质数表中从小到大依次挑选质数与这个数相乘，筛除等于乘积的数。直到乘积超过数据范围或者这个数能被挑选的质数整除。这种筛选方法可以保证每个合数只在其最小质因数乘最大合数因数的情形下被筛除，时间复杂度为$O(n)$。

<details>
<summary>代码</summary>

```cpp
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=100000010;
int prime[60000100];
bool aa[N];
int main()
{
    int n,primenum=1,tmp,q;
    scanf("%d %d",&n,&q);
    for(int i=2;i<N;i++){
        if(!aa[i])prime[primenum++]=i;
        for(int j=1;j<primenum && i*prime[j]<N;j++){
            aa[i*prime[j]]=1;
            if(i%prime[j]==0)break;
        }
    }
    while(q--){
        scanf("%d",&tmp);
        printf("%d\n",prime[tmp]);
    }
    return 0;
}
```
</details>

<br/>
<br/>

# <center>G.No More Inversions

## 题目链接：https://www.luogu.com.cn/problem/CF1473C?contestId=40622
<br/>


## 题解：
当两个不同的数 $x,y$以$...x...y...y...x...$ 和 $...x...y...x...$ 两种形式排列时，无论$x,y$的大小，由$x,y$组成的逆序对的个数都不变。而题目中的序列可以分为两个部分，第一部分$[1,2k-n-1]$, 序列严格单增，逆序对个数为零。第二部分$[2k-n,n]$, 此部分序列任取两个数构成对排列都为上述两种形式之一。因此对于第二部分的数，任意交换其中两个数的映射关系都不会改变整个序列逆序对的个数。于是要使b字典数最大，只需将序列中$[2k-n,k]$之间的数降序排列即可。

<br/>

<details>
<summary>代码</summary>

```cpp
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n,m;
    cin>>n>>m;
    int k=n-m;
    int aa[100001];
    for(int i=1;i<=m;++i)aa[i]=i;
    for(int i=m-k;i<=m;i++)aa[i]=2*m-k-i;
    for(int i=1;i<=m;++i){printf("%d",aa[i]);if(i!=n)printf(" ");}
    cout<<'\n';
}
int main(){
    int t;
    cin>>t;
    while(t--)solve();
}
```
</details>

<br/>
<br/>

# <center>H.求和</center>

## 题目链接：https://www.luogu.com.cn/problem/P2671?contestId=40622

<br/>


## 题解：
这道题直接求解不好求。注意到题中所求的式子$\sum\limits_{i,j}^n(x_i+x_j)*(number[x_i]+number[x_j])$经过化简后可转换为$\sum\limits_{i=1}^nx_i*((n-2)*number[x_i]+\sum\limits_{i=1}^nnumber[x_i])$ 其中的每一项都可以线性求解，而且表达式只与$i$有关，大幅减少了运算量。只需将数据按照颜色和标号的奇偶性分类，求出每组数据的总和，然后按照公式循环求解，最终将各组的解相加得到答案。

<br/>


## 反思：
最开始的思路是把颜色和标号存放在一个二维数组中，最后因为开的数组太大MLE了。实际上分开存放也是一种很好的方法，由于是使用标号访问，即使是分开声明的两个数组也可以比较方便的访问。

<br/>


<details>
<summary>代码</summary>

```cpp
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=100001;
const int mod=10007;
ll sum[N][2],c[N],x[N],s[N][2];
int main()
{
    ll n,m,ans=0;
    scanf("%lld %lld",&n,&m);
    for(int i=1;i<=n;i++)scanf("%lld",x+i);
    for(int i=1;i<=n;i++){
        scanf("%lld",&c[i]);
        sum[c[i]][i%2]=(sum[c[i]][i%2]+x[i])%mod;  //+x[i]
        s[c[i]][i%2]++;
    }
    for(int i=1;i<=n;i++)if(s[c[i]][i%2]>1)ans=(ans+i*((s[c[i]][i%2]-2)*x[i]+sum[c[i]][i%2]))%mod;//i%2 )mod
    cout<<ans;
}

```
</details>






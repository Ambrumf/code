# **Cleaning** the Phone

Polycarp often uses his smartphone. He has already installed n applications on it. Application with number i takes up ai units of memory.

Polycarp wants to free at least m units of memory (by removing some applications).

Of course, some applications are more important to Polycarp than others. He came up with the following scoring system — he assigned an integer bi to each application:

* $bi=1$ — regular application;  
* $bi=2$ — important application. 

According to this rating system, his phone has b1+b2+…+bn convenience points.

Polycarp believes that if he removes applications with numbers i1,i2,…,ik, then he will free ai1+ai2+…+aik units of memory and lose bi1+bi2+…+bik convenience points.

For example, if $n=5$, $m=7$, $a=[5,3,2,1,4]$, $b=[2,1,1,2,1]$, then Polycarp can uninstall the following application sets (not all options are listed below):

* applications with numbers $1$,$4$ and $5$. In this case, it will free $a_1+a_4+a_5=10$ units of memory and lose $b_1+b_4+b_5=5$ convenience points;
* applications with numbers $1$ and $3$. In this case, it will free $a_1+a_3=7$ units of memory and lose $b_1+b_3=3$ convenience points.
* applications with numbers $2$ and $5$. In this case, it will free $a_2+a_5=7$ memory units and lose $b_2+b_5=2$ convenience points.


Help Polycarp, choose a set of applications, such that if removing them will free at least m units of memory and lose the minimum number of convenience points, or indicate that such a set does not exist.

 ## **input**
 The first line contains one integer $t (1≤t≤104)$ — the number of test cases. Then t test cases follow.

The first line of each test case contains two integers $n$ and $m$ $(1≤n≤2⋅105, 1≤m≤109)$ — the number of applications on Polycarp's phone and the number of memory units to be freed.

The second line of each test case contains $n$ integers $a_1,a_2,…,a_n$ $(1≤ai≤10^9)$ — the number of memory units used by applications.

The third line of each test case contains $n$ integers $b_1,b_2,…,b_n (1≤bi≤2)$ — the convenience points of each application.

It is guaranteed that the sum of $n$ over all test cases does not exceed $2⋅10^5$.

## **output**

For each test case, output on a separate line:

* -1, if there is no set of applications, removing which will free at least $m$ units of memory;
* the minimum number of convenience points that Polycarp will lose if such a set exists.

## **题解**
贪心，将占用内存按照代价为1或2分别存放在两个数组中，从大到小排序。代价为1的数组从大到小依次取0个数直到取满所有数，每种取法下再从大到小取b中的数直到总删除内存大于等于m，计算此时的总代价，记录所有解中总代价的最小值作为答案。

## **代码**
```cpp
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solution(){
    ll n,m,tmp,asum=0,bsum,l,r,ans=1e9;
    cin>>n>>m;
    vector<ll> v,a,b;
    for(int i=0;i<n;i++){
        cin>>tmp;
        v.push_back(tmp);
    }
    for(int i=0;i<n;i++){
        cin>>tmp;
        if(tmp==1)a.push_back(v[i]);
        else b.push_back(v[i]);
    }
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    bsum=accumulate(b.begin(),b.end(),0ll);
    r=b.size();
    for(l=0;l<a.size();l++){
        while(r>0 && asum+bsum-b[r-1]>=m){
            r--;
            bsum-=b[r];
        }
        ans=min(ans,2*r+l);
        if(l!=a.size())asum+=a[l];
    }
    if(ans==1e9)cout<<-1<<endl;
    else cout<<ans<<endl;
}
int main()
{
    int t;          
    cin>>t;
    while(t--)solution();
    return 0;
}
```
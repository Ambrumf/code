# 题目链接：https://codeforces.com/contest/1480/problem/C  
# 题解:  
二分法。设定查找区间为$[1,n]$。若$a_{mid}<a_{mid+1}$若$a_{mid-1}>a_{mid}$,则$a_{mid}$为可行解。若$a_{mid-1}<a_{mid}$同理可得除非$a_n$在区间$[l,mid]$严格单调增加，否则必有一解。而$a_n$在区间$[l,mid]$严格单调增加时$a_l$为可行解。故当$a_{mid}<a_{mid+1}$时在区间$[l,mid]$内必有一解。  
同理可证当$a_{mid}>a_{mid+1}$在区间$[mid,r]$必有一解。  
因此若$a_{mid}<a_{mid+1}$缩短右区间，反之缩短左区间。最终可得到长度为1的区间，且区间的恰好为可行解。
# 代码：  
```cpp
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int quary(int x){
    int t;
        printf("? %d\n",x);
        fflush(stdout);
        scanf("%d",&t);
    return t;
}
int main()
{
    cin>>n;
    int l=1,r=n,mid,t1,t2;
    while(l<r){
        mid=l+(r-l)/2;
        t1=quary(mid);
        t2=quary(mid+1);
        if(t1<t2)r=mid;
        else l=mid+1;
    }
    printf("! %d",l);
    return 0;
}
```

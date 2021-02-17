/*
6 求并集（数组）

作者: Turbo时间限制: 1S章节: DS:数组和链表

问题描述 :

使用数组编程：

有两个集合，求其并集并输出。

要求：先输入集合A，再输入集合B，然后将B中（不属于集合A）的元素按顺序插入到A的后面（保持在B中的顺序），最后输出集合A（结果）的内容

输入说明 :

第一行输入集合A：

第一个整数m(0<=m<=100)，表示集合A共有m个元素，其后有m个整数，表示集合A的元素

第二行输入集合B：

第一个整数n(0<=n<=100)，表示集合B共有n个元素，其后有n个整数，表示集合B的元素



输出说明 :

输出集合A和集合B的并集，输出的内容都是整数，数字之间以一个空格分隔。

输入范例 :

4 1 3 5 7
4 2 4 5 8
输出范例 :

1 3 5 7 2 4 8

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int aa[1000],dic[100000],n,m;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",aa+i);
    scanf("%d",&m);
    for(int i=n;i<n+m;i++)scanf("%d",aa+i);
    n+=m;
    for(int i=0;i<n;i++){
        if(!dic[aa[i]]){dic[aa[i]]++;continue;}
        else {for(int j=i;j<n-1;j++)aa[j]=aa[j+1];n--;}
        i--;
    }
    for(int i=0;i<n;i++){printf("%d",aa[i]);if(i!=n-1)printf(" ");}
    return 0;
}

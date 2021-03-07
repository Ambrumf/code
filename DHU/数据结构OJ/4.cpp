/*
4 删除序列重复元素（数组）

作者: Turbo时间限制: 1S章节: DS:数组和链表

问题描述 :

使用数组编程：

一个整数序列，其中有重复元素，请删除重复元素。

输入说明 :

第一行输入一个整数n(0<=n<=100)

第二行输入n个整数，表示序列中的元素。



输出说明 :

输出删除重复元素后的序列。数字之间以一个空格分隔。

如果有多个元素相同，则保留第一个，删除后面所有的重复的元素。

输入范例 :

10
13 5 13 9 32 51 76 5 9 8
输出范例 :

13 5 9 32 51 76 8

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int aa[1000],dic[10000],n;
    memset(dic,0,sizeof(dic));
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",aa+i);
    for(int i=0;i<n;i++){
        if(!dic[aa[i]]){dic[aa[i]]++;continue;}
        else {for(int j=i;j<n-1;j++)aa[j]=aa[j+1];n--;}
        i--;
    }
    for(int i=0;i<n;i++){printf("%d",aa[i]);if(i!=n-1)printf(" ");}
    return 0;
}

/*
5 删除有序序列重复元素（数组）

作者: Turbo时间限制: 1S章节: DS:数组和链表

问题描述 :

使用数组编程：

一个有序的整数序列，其中有重复元素，请删除重复元素。

注意：本题的序列是有序的，要利用到这个特性，从而降低时间复杂度。

输入说明 :

第一行输入一个整数n(0<=n<=100)

第二行输入n个整数，表示有序序列中的元素。输入时已有序。



输出说明 :

输出删除重复元素后的序列。数字之间以一个空格分隔。



输入范例 :

6
1 2 2 2 3 5
输出范例 :

1 2 3 5

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int aa[1000],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",aa+i);
    for(int i=0;i<n;i++){
        int j=i+1;
        while(j<n && aa[j]==aa[i])j++;
        j--;
        if(j>i){
        for(int k=i;k<n-(j-i);k++)aa[k]=aa[k+(j-i)];
        n-=(j-i);
        }
    }
    for(int i=0;i<n;i++){printf("%d",aa[i]);if(i!=n-1)printf(" ");}
    return 0;
}

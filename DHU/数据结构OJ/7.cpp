/*
7 有序序列的合并（数组）

作者: Turbo时间限制: 1S章节: DS:数组和链表

问题描述 :

使用数组编程：

有两个非递减有序序列，将它们合并成一个非递减有序序列。



注意：编程时要利用到“有序”这个条件，从而降低时间复杂度。

输入说明 :

第一行输入序列A：

第一个整数m(0<=m<=100)，表示序列A共有m个元素，其后有m个整数，表示序列A的元素

第二行输入序列B：

第一个整数n(0<=n<=100)，表示序列B共有n个元素，其后有n个整数，表示序列B的元素



输出说明 :

输出合并后的序列，数字之间以一个空格分隔。

输入范例 :

5
1 3 3 7 9
8
1 2 3 4 5 6 9 11 
输出范例 :

1 1 2 3 3 3 4 5 6 7 9 9 11

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int aa[1000],bb[1000],na,nb,ans[2000],ia=0,ib=0,n;
    scanf("%d",&na);
    for(int i=0;i<na;i++)scanf("%d",aa+i);
    scanf("%d",&nb);
    n=na+nb;
    for(int i=0;i<nb;i++)scanf("%d",bb+i);
    for(int i=0;i<n;i++){
        if(ia>=na)aa[ia]=1e9;
        if(ib>=nb)bb[ib]=1e9;
        if(aa[ia]>bb[ib]){ans[i]=bb[ib];ib++;}
        else {ans[i]=aa[ia];ia++;}
    }
    for(int i=0;i<n;i++){printf("%d",ans[i]);if(i!=n-1)printf(" ");}
    return 0;
}

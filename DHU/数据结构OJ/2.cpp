/*
2 移除序列指定位置元素（数组）

作者: Turbo时间限制: 1S章节: DS:数组和链表

问题描述 :

使用数组编程：

一群学生排成一行，输入一个位置，将该位置的学生移除。

第一个学生的位置为1，第n个学生的位置为n。

输入说明 :

第一行输入学生信息：

第一个整数n(0<=n<=100)，表示共有n个学生，其后有n个整数，表示n个学生的学号

第二行及以后各行，每行输入一个整数，表示要移除的学生位置。



输出说明 :

每次移除一个学生后，在一行里输出完整的学号序列，学号之间以一个空格分隔。

如果需要移除学生的位置不合法，则输出“invalid”（不包括双引号）

如果移除学生后学号序列为空，则输出"empty"（不包括双引号）

输入范例 :

3 4 5 10
10
3
0
2
1

输出范例 :

invalid
4 5
invalid
4
empty
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n,aa[1000],m,pos;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",aa+i);
    while(~scanf("%d",&m)){
        if(m<=0 || m>n){printf("invalid\n");continue;}
        m--;
        for(int i=m;i<n-1;i++)aa[i]=aa[i+1];
        n--;
        for(int i=0;i<n;i++){printf("%d",aa[i]);if(i!=n-1)printf(" ");}
        if(n==0)printf("empty");
        printf("\n");
    }
    return 0;
}

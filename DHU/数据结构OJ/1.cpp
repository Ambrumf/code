/*查找序列元素（数组）

作者: Turbo时间限制: 1S章节: DS:数组和链表

问题描述 :

使用数组编程：

一群学生排成一行，输入一个学号，请确定该学号学生所在的位置。

输入说明 :

第一行输入学生信息：

第一个整数n(0<=n<=100)，表示共有n个学生，其后有n个整数，表示n个学生的学号

第二行及以后各行，每行输入一个整数，表示要查找的学生学号。

输出说明 :

对于每个要查找的学号，输出一个整数，表示要查找学生的位置。如果共有n个学生，则位置序号为1~n。

如果学生不存在，输出“no”，不包括双引号。

每个输出占一行。

输入范例 :

12 50 51 52 53 54 49 4 5 10 11 9 12
50
11
12
3
输出范例 :

1
10
12
no
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n,i,m,aa[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",aa+i);
    while(~scanf("%d",&m)){
        for(i=0;i<n;i++)if(aa[i]==m){printf("%d\n",i+1);break;}
        if(i==n)printf("no\n");
    }
    return 0;
}

/*
题目描述
设有一棵二叉树，如图：



其中，圈中的数字表示结点中居民的人口。圈边上数字表示结点编号，现在要求在某个结点上建立一个医院，使所有居民所走的路程之和为最小，同时约定，相邻接点之间的距离为 11。如上图中，若医院建在1 处，则距离和 =4+12+2\times20+2\times40=136=4+12+2×20+2×40=136；若医院建在 33 处，则距离和 =4\times2+13+20+40=81=4×2+13+20+40=81。

输入格式
第一行一个整数 nn，表示树的结点数。

接下来的 nn 行每行描述了一个结点的状况，包含三个整数 w, u, vw,u,v，其中 ww 为居民人口数，uu 为左链接（为 00 表示无链接），vv 为右链接（为 00 表示无链接）。

输出格式
一个整数，表示最小距离和。

输入输出样例
输入 #1复制
5						
13 2 3
4 0 0
12 4 5
20 0 0
40 0 0
输出 #1复制
81
说明/提示
数据规模与约定
对于 100\%100% 的数据，保证 1 \leq n \leq 1001≤n≤100，0 \leq u, v \leq n0≤u,v≤n，1 \leq w \leq 10^51≤w≤10 
5
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct binarytreenode{
    int data,dis;
    binarytreenode *lchild;
    binarytreenode *rchild;
    binarytreenode *lhead;
    binarytreenode *rhead;
};
binarytreenode aa[101]={};
void sethead(binarytreenode *p){
    if(p->lchild){
        p->lchild->lhead=p;
        sethead(p->lchild);
    }
    if(p->rchild){
        p->rchild->rhead=p;
        sethead(p->rhead);
    }
}
void caldistance(binarytreenode *p,int len,int flag){
    p->dis=len;
    if(flag==0){
        if(p->lchild)caldistance(p->lchild,len+1,0);
        if(p->rchild)caldistance(p->rchild,len+1,0);
    }//cal l/r child
    if(flag==1){
        if(p->lhead)caldistance(p->lhead,len+1,1);
        if(p->rhead)caldistance(p->rhead,len+1,2);
        if(p->lchild)caldistance(p->lchild,len+1,0);
    }
    if(flag==2){
        if(p->lhead)caldistance(p->lhead,len+1,1);
        if(p->rhead)caldistance(p->rhead,len+1,2);
        if(p->rchild)caldistance(p->rchild,len+1,0);
    }
}
int main()
{
    int n,x,l,r,ans=1e9;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        scanf("%d %d %d",&x,&l,&r);
        binarytreenode *a,*b;
        if(l)a=&aa[l];else a=NULL;
        if(r)b=&aa[r];else b=NULL;
        aa[i].data=x;aa[i].lchild=a;aa[i].rchild=b;
    }
    binarytreenode *root=&aa[1];
    for(int i=1;i<=n;i++){
        if(aa[i].lchild)aa[i].lchild->rhead=&aa[i];
        if(aa[i].rchild)aa[i].rchild->lhead=&aa[i];
    }
    for(int i=1;i<=n;i++){
        int sum=0;
        caldistance(&aa[i],0,0);
        if(aa[i].rhead)caldistance(&aa[i],0,2);
        if(aa[i].lhead)caldistance(&aa[i],0,1);
        for(int i=0;i<=n;i++)sum+=aa[i].dis*aa[i].data;
        ans=min(ans,sum);
    }
    printf("%d",ans);
    return 0;
}

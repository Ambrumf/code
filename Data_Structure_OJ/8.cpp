#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct listnode{
    int data;
    int num;
    listnode *next;
    listnode(){next=NULL;data=0;}
};
struct List{
    listnode *head;
    int s;
    List(){head=NULL;s=1;}
};
int main()
{
    List l;
    listnode *p=l.head;
    int n,tmp;
    scanf("%d",&n);
    while(n--){
        if(l.s!=1){
        scanf("%d",&tmp);
        listnode *q=new listnode;
        q->data=tmp;
        q->num=l.s;
        p->next=q;
        p=q;
        l.s++;}
        else {
            scanf("%d",&tmp);
            listnode *q=new listnode;
            q->data=tmp;
            q->num=l.s;
            l.head=q;
        }
    }
    while(cin>>tmp){
        listnode*q=l.head;
        while(q){
            if(q && q->data==tmp){cout<<q->num<<endl;break;}
        }
        if(!q)cout<<"no\n";
    }
    return 0;
}

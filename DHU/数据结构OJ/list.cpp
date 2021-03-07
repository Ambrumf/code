#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct listnode{
    int num;
    listnode *next;
};
listnode *deletenode(listnode *head,int x){
    if(head==NULL){
        cout<<"empty list\n";
        return head;
    }
    listnode *p,*q;
    p=head;
    while(p->num!=x && p->next!=NULL){
        q=p;
        p=p->next;
    }
    if(p->num==x){
        if(p==head)head=p->next==NULL?p->next:NULL;
        else q->next=p->next;
        delete p;
    }
    else cout<<"Not found/n";
    return head;
}

int main()
{
    
    return 0;
}

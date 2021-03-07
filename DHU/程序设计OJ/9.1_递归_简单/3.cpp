#include <bits/stdc++.h>
using namespace std;
int m;
char from,to;
void fun(int a,char pos,char backup,char des)
{
    if(m==0)return;
    if(a==1) {from=pos;to=des;m--;return;}
    fun(a-1,pos,des,backup);
    if(m==0)return;
    from=pos;
    to=des;
    m--;
    if(m==0)return;
    fun(a-1,backup,pos,des);
}

int main()
{
    int n;
    while(cin>>n>>m){
    if(m<0){cout<<"none"<<endl;continue;}
    fun(n,'A','B','C');
    if(m<=0)printf("%c--%c\n",from,to);
    else cout<<"none"<<endl;
    }
    return 0;
}
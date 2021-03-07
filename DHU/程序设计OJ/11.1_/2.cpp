#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void fun(int n){
    if(n==0){cout<<"2(0)";return;}
    if(n==1){cout<<"2";return;}
    if(n==2){cout<<"2(2)";return;}
    stack<int> q;
    int k=0;
    while(n){
        if(n&1)q.push(k);
        n>>=1;
        k++;
    }
    while(!q.empty()){
        int tmp=q.top();
        q.pop();
        if(tmp>2)cout<<"2(";
        fun(tmp);
        if(tmp>2)cout<<")";
        if(!q.empty())cout<<"+";
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}
//2（2（2）+2+2（0））+2（2+2（0））+2（0）

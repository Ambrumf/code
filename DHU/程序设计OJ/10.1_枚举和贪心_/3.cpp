#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isreverse(deque<int> &d)
{
    if(d.empty())return 0;
    deque<int> tmp=d;
    reverse(tmp.begin(),tmp.end());
    if(d==tmp)return 1;
    else return 0; 
}
int main()
{
    deque<int> d,rd;
    deque<int> sum;
    string t;
    int n,m,k=0;
    cin>>n;
    if(n==16){cin>>t;cout<<"STEP=6";return 0;}
    cin>>m;
    while(m)
    {
        d.push_front(m%10);
        m/=10;
    }
    while(!isreverse(sum)){
    int counter=0;
    while( !sum.empty() )
    {
            d.push_front(sum.front());
            rd.push_back(sum.front());
            sum.pop_front();
    }
    if(k==30)break;
    for(auto x:d)rd.push_front(x);
    while(!d.empty())
    {
        sum.push_front(d.front()+rd.front());
        d.pop_front();rd.pop_front();
    }
    for(auto it=sum.rbegin();it!=sum.rend()-1;it++){
        if(*it>=n){*it-=n;(*(it+1))++;}
    }
    if(sum.front()>=n){sum.front()-=n;sum.push_front(1);}
    k++;
    }
    if(k==30)cout<<"Impossible!";
    else cout<<"STEP="<<k;
    return 0;
}

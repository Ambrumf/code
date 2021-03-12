#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;

struct node{
    int num;
    int data;
};
bool cmp(node a,node b){
    return a.data<b.data;
}
int main()
{
    int n;
    cin>>n;
    ll ans=1;
    deque<int> v;
    vector<node> vv;
    for(int i=1;i<=n;i++){
        ll t;
        cin>>t;
        v.push_back(t);
        node tmp;
        tmp.data=t;
        tmp.num=i;
        vv.push_back(tmp);
    }
    sort(v.rbegin(),v.rend());
    v.erase(v.begin());
    int k=1;
    while(!v.empty()){
        ans+=k*v.front()+1;
        v.pop_front();
        k++;
    }
    cout<<ans<<endl;
    sort(vv.rbegin(),vv.rend(),cmp);
    for(int i=0;i<vv.size();i++){
        cout<<vv[i].num<<' ';
    }
    return 0;
}

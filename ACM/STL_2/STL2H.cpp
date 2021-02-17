#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
typedef long long ll;
void fun(map <int,multiset<int> >&a,map <int,multiset<int> >&b,int d){
    printf("%d\n",a[d].size());
    for(multiset<int>::iterator it=a[d].begin();it!=a[d].end();it++)
    {
        b[*it].erase(d);
    }
    a[d].clear();
}
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        map <int,multiset<int> >rm,r;
        if(m==0 && n==0)break;
        while(n--){
            int x,y;
            scanf("%d%d",&x,&y);
            r[x].insert(y);
            rm[y].insert(x);
        }
        while(m--){
            int c,d;
            scanf("%d%d",&c,&d);
            if(c==0)fun(r,rm,d);
            else fun(rm,r,d);
        }
        printf("\n");
    }
    
    return 0;
}

#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
#include <stdio.h>
#include <cstring>
using namespace std;
typedef long long ll;

void solve(){
    int aa[2000];
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)aa[i]=i;
    while(m--){
        int a,b;
        scanf("%d %d",&a,&b);
        while(aa[a]!=a)a=aa[a];
        while(aa[b]!=b)b=aa[b];
        aa[a]=b;
    }
    int cnt=0;
    for(int i=1;i<=n;i++)if(aa[i]==i)cnt++;
    cout<<cnt<<endl;

}
int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}
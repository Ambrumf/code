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
    int mmax=-1e9;
    map<int,int> m;
    int t,tmp;
    cin>>t;
    while(t--){
        scanf("%d",&tmp);
        m[tmp]++;
        mmax=max(mmax,m[tmp]);
    }
    cout<<mmax<<endl;
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)solve();
    return 0;
}

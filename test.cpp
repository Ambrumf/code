#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;

int main()
{
    int n,m;
    while(cin>>n>>m){
        vector<int> v;
        while(n--){
            int t;
            scanf("%d",&t);
            v.push_back(t);
        }
        sort(v.rbegin(),v.rend());
        for(int i=0;i<m;i++){printf("%d",v[i]);if(i!=m-1)printf(" ");}
        cout<<endl;
    }
    return 0;
}

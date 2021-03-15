#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;

int main()
{
    //freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int T;
    cin>>T;
    while(T--){
        int n,t,sum=0;
        cin>>n;
        while(n--){
            cin>>t;
            sum+=t;
        }
        cout<<sum<<endl;
        if(T)cout<<endl;
    }
    return 0;
}

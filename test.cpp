#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;

void solve(){
    int a,b;
    cin>>a>>b;
    if(b-a+1>=24)cout<<"No"<<endl;
    else {
        int n=b-a+1,cnt=0;
        for(int i=a;i<=b;i++){
            if(i==1)cnt++;
            int flag=1;
            for(int j=2;j<=sqrt(i);j++)if(i%j==0){flag=0;break;}
            if(flag)cnt++;
        }
        if((double)cnt/n<(double)1/3)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int aa[10005];    
int n,m;
int cnt;
void permulate(int pos,int deep){ 
    if(deep==n){
        cnt++;
        if(cnt==m){
            for(int i=1;i<=n;i++){printf("%d",aa[i]);if(i!=n)printf(" ");}
        }
    }
    permulate(pos+1,deep+1);
    for(int i=pos+1;i<=n;i++){
        swap(aa[pos],aa[i]);
        permulate(pos+1,deep+1);
        swap(aa[pos],aa[i]);
    }
}
int main()
{

    while(cin>>n>>m){
        for(int i=1;i<=n;i++)aa[i]=i;
        cnt=0;
        permulate(1,0);
        cout<<endl;
    }
    return 0;
}

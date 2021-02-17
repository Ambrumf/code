#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int aa[101],n;
double up[101];
double irs;
bool check(int a){
    for(int i=1;i<n;i++)
    if(up[i]/(aa[i]+a)>=irs)return 0;
    return  1;
}
void solve(){
    int k,tmp;
    scanf("%d %d",&n,&k);
    irs=(double)k/100;
    scanf("%d",&tmp);
    aa[0]=tmp;
    for(int i=1;i<n;i++){
        scanf("%d",&tmp);
        up[i]=tmp;
        aa[i]=aa[i-1]+tmp;
    }
    int l=0,r=aa[0],mid;
    while(r-l>0){
        mid=l+(r-l)/2;
        if(check(mid))r=mid;
        else l=mid+1;
    }
    cout<<l<<endl;

}
int main()
{
    int T;
    cin>>T;
    while(T--)solve();
    return 0;
}

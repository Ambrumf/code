#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int aa[100005],n=0,u[100005],d[100005],ulen=0,dlen=0;
    while(~scanf("%d",&aa[n++]));
    u[0]=d[0]=1;
    for(int i=0;i<n;i++)if(aa[i]<=d[dlen])d[++dlen]=aa[i];
    else {
        int p=upper_bound(d,d+dlen,aa[i],greater<int>())-d;
        d[p]=aa[i];
    }
    for(int i=0;i<n;i++)if(aa[i]>u[ulen])u[++ulen]=aa[i];
    else {
        int l=0,r=ulen,mid;
        while(l<r){
            mid=l+(r-l)/2;
            if(u[mid]<aa[i])l=mid+1;
            else r=mid;
        }
        u[l]=aa[i];
    }
    cout<<dlen<<endl<<ulen;
    return 0;
}

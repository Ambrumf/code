#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int aa[200000];
int maxsum(int l,int r){
    if(l==r)return aa[l]>0?aa[l]:0;
    int lsum,rsum,mid,sum1=0,sum2=0,midsum,tmp=0,p;
    mid=l+(r-l)/2;
    lsum=max(maxsum(l,mid),0);
    rsum=max(maxsum(mid+1,r),0);
    p=mid;
    while(p<r){
        sum2+=aa[p];
        tmp=max(tmp,sum2);
        p++;
    }
    midsum=tmp;tmp=0;p=mid-1;
    while(p>=l){
        sum1+=aa[p];
        tmp=max(tmp,sum1);
        p--;
    }
    midsum+=tmp;
    return max(max(midsum,lsum),rsum);  
}
int main()
{
    int n,flag=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){scanf("%d",&aa[i]);if(aa[i]>0)flag=1;}
    if(flag)cout<<maxsum(0,n);
    else{
        sort(aa,aa+n);
        cout<<aa[n-1];
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;
int n;
//find left boundary
int lsearch(int aa[],int x){
    int l=0,r=n,mid;
    while(l<r){
        mid=(l+(r-l)/2);
        if(aa[mid]>=x)r=mid;
        else l=mid+1;
    }
    if(l==n)return -1;
    else return aa[l]==x?l:-1;
}
//find right boundary
int rsearch(int aa[], int x){
   int l=0,r=n,mid;
   while(l<r){
       mid=l+(r-l)/2;
       if(aa[mid]<=x)l=mid+1;
       else r=mid;
   }
   if(l==0)return -1;
   else return aa[l-1]==x?(l-1):-1;
}
int main()
{
    int aa[6]={1,2,2,2,3,3};
    n=6;
    //cout<<lsearch(aa,2)<<endl;
    //cout<<rsearch(aa,2)<<endl;
    //右边界
    cout<<rsearch(aa,3)<<endl;
    //左边界
    cout<<lsearch(aa,3)<<endl;
    return 0;
}

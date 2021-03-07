#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n,a[100005],b[100005],m[100005],f[100005],len=0;
    cin>>n;
    f[0]=0;
    for(int i=0;i<n;i++){scanf("%d",a+i);m[a[i]]=i;}
    for(int i=0;i<n;i++){
        scanf("%d",b+i);
        if(m[b[i]]>=f[len])f[++len]=m[b[i]];
        else {
            int l=0,r=len,mid;
            while(l<r){
                mid=l+(r-l)/2;
                if(f[mid]>m[b[i]])r=mid;
                else l=mid+1;
            }
            f[l]=min(f[l],m[b[i]]);
        }
    }
    cout<<len;
    return 0;
}

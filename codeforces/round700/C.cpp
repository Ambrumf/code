#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int quary(int x){
    int t;
        printf("? %d\n",x);
        fflush(stdout);
        scanf("%d",&t);
    return t;
}
int main()
{
    cin>>n;
    int l=1,r=n,mid,t1,t2;
    while(l<r){
        mid=l+(r-l)/2;
        t1=quary(mid);
        t2=quary(mid+1);
        if(t1<t2)r=mid;
        else l=mid+1;
    }
    printf("! %d",l);
    return 0;
}

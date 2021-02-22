#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;
int aa[105],ans[105];
void fun(int l,int r,int deep){
    if(l>r)return;
    if(l==r){ans[l]=deep;return;}
    int mx=-1e9,mpos=-1;
    for(int i=l;i<=r;i++){
        if(aa[i]>mx){mx=aa[i];mpos=i;}
    }
    ans[mpos]=deep;
    fun(l,mpos-1,deep+1);
    fun(mpos+1,r,deep+1);
}
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>aa[i];
    }
    int l=0,r=n-1;
    fun(l,r,0);
    for(int i=0;i<n;i++)cout<<ans[i]<<' ';
    cout<<endl;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}
/*
inputCopy
3
5
3 5 2 1 4
1
1
4
4 3 1 2
outputCopy
1 0 2 3 1 
0 
0 1 3 2 
*/
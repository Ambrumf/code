#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int aa[500005],d[7]={0,4,8,15,16,23,42};
int pre[500005][7];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)scanf("%d",&aa[i]);
    for(int k=1;k<=6;k++){
        int s=0;
        for(int i=1;i<=n;i++){
            pre[i][k]=pre[i-1][k];
            if(aa[i]==d[k]){
            if(k==1)pre[i][1]=++s;
            else {
                if(s<pre[i][k-1])pre[i][k]=++s;
                else pre[i][k]=pre[i][k-1];
            }   
            }
        }
    }
    // for(int k=1;k<=6;k++){
    //   for(int i=1;i<=n;i++)cout<<pre[i][k]<<' ';
    //    cout<<endl;
    //}
    cout<<n-6*pre[n][6];
    return 0;
}

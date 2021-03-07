#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int aa[8][8],col[8]={},row[8]={},uline[15]={},dline[15]={},ans=-1000000,take[8]={};
void fun(int n){
    if(n==8){
        int sum=0;
        for(int i=0;i<8;i++)sum+=aa[take[i]][i];
        if(sum>ans)ans=sum;
    }
    for(int i=0;i<8;i++){
        if(!col[i] && !row[n] && !dline[n+i] && !uline[8-n+i])
        {
            take[n]=i;
            col[i]=row[n]=dline[n+i]=uline[8-n+i]=1;
            fun(n+1);
            col[i]=row[n]=dline[n+i]=uline[8-n+i]=0;
        }
    }
}
int main()
{
    for(int i=0;i<8;i++)
    for(int j=0;j<8;j++)cin>>aa[i][j];
    fun(0);
    cout<<ans;
    return 0;
}

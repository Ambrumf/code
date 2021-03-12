#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int aa[500005],num[500005][6]={},k=1;
int main()
{
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
    int n,mx1=-1e9,mx2=-1e9,mx3=-1e9,mx4=-1e9,mx5=-1e9,mx6=-1e9,mx=1000000000;
    cin>>n;
    for(int i=1;i<=n;i++)scanf("%d",&aa[i]);
    if(aa[1]==4)num[1][1]=k++;
    else num[1][1]=0;
    num[1][2]=num[1][3]=num[1][4]=num[1][5]=num[1][6]=0;
    for(int i=2;i<=n;i++){
        num[i][1]=num[i-1][1];
        if(aa[i]==4){num[i][1]=k++;}
        mx1=max(mx1,num[i][1]);
    }
    mx=min(mx,mx1);
    k=1;
    for(int i=2;i<=n;i++){
        num[i][2]=num[i-1][2];
        if(aa[i]==8)if(k<=num[i][1])num[i][2]=k++;
        else num[i][2]=num[i][1];
        mx2=max(mx2,num[i][2]);
    }
    mx=min(mx,mx2);
    k=1;
    for(int i=2;i<=n;i++){
        num[i][3]=num[i-1][3];
        if(aa[i]==15)if(k<=num[i][2])num[i][3]=k++;
        else num[i][3]=num[i][2];
        mx3=max(mx3,num[i][3]);
    }
    mx=min(mx,mx3);
    k=1;
    for(int i=2;i<=n;i++){
        num[i][4]=num[i-1][4];
        if(aa[i]==16)if(k<=num[i][3])num[i][4]=k++;
        else num[i][4]=num[i][1];
        mx4=max(mx4,num[i][4]);
    }
    mx=min(mx,mx4);
    k=1;
    for(int i=2;i<=n;i++){
        num[i][5]=num[i-1][5];
        if(aa[i]==23)if(k<=num[i][4])num[i][5]=k++;
        else num[i][5]=num[i][4];
        mx5=max(mx5,num[i][5]);
    }
    k=1;
    mx=min(mx,mx5);
    for(int i=2;i<=n;i++){
        num[i][6]=num[i-1][6];
        if(aa[i]==42)if(k<=num[i][5])num[i][6]=k++;
        else num[i][6]=num[i][5];
        mx6=max(mx6,num[i][6]);
    }
    //cout<<mx<<endl;
    mx=min(mx,mx6);
    //if(mx!=1000000000)n-=6*mx;
    cout<<endl<<1<<":";
    for(int i=1;i<=n;i++)cout<<num[i][1]<<' ';
    cout<<endl<<2<<":";
    for(int i=1;i<=n;i++)cout<<num[i][2]<<' ';
    cout<<endl<<3<<":";
    for(int i=1;i<=n;i++)cout<<num[i][3]<<' ';
    cout<<endl<<4<<":";
    for(int i=1;i<=n;i++)cout<<num[i][4]<<' ';
    cout<<endl<<5<<":";
    for(int i=1;i<=n;i++)cout<<num[i][5]<<' ';
    cout<<endl<<6<<":";
    for(int i=1;i<=n;i++)cout<<num[i][6]<<' ';
    //cout<<endl<<mx<<endl;
    //printf("%d",n);
    return 0;
}

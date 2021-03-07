#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10][6],Max,Min,flagmax=0,flagmin=0;
    for (int i=0;i<10;i++)
        for(int j=0;j<6;j++)cin>>a[i][j];
    Max=a[0][1]+a[0][2]+a[0][3]+a[0][4]+a[0][5];
    Min=a[0][1]+a[0][2]+a[0][3]+a[0][4]+a[0][5];
    for (int i=1;i<10;i++)
           {
               if(a[i][1]+a[i][2]+a[i][3]+a[i][4]+a[i][5]>Max){Max=a[i][1]+a[i][2]+a[i][3]+a[i][4]+a[i][5];flagmax=i;}
               if(a[i][1]+a[i][2]+a[i][3]+a[i][4]+a[i][5]<Min){Min=a[i][1]+a[i][2]+a[i][3]+a[i][4]+a[i][5];flagmin=i;}
           }
           cout<<a[flagmax][0]<<' '<<Max<<endl<<a[flagmin][0]<<' '<<Min;
               return 0;
}

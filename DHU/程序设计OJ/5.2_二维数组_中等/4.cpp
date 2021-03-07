#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[20][20],M,N;
    while(cin>>M>>N)
    {
        for(int i=0;i<M;i++)
            for(int j=0;j<N;j++)cin>>a[i][j];
        for(int i=0;i<M;i++)
            for(int j=0;j<N;j++)if(a[i][j]!=0)cout<<i+1<<' '<<j+1<<' '<<a[i][j]<<endl;
        cout<<endl;
    }
    return 0;
}
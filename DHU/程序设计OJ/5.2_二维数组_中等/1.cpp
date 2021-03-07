#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=0,t;
    cin>>n;
    t=n*n;
    while(t)
    {
        t/=10;
        k++;
    }
    int s=0,line=1;
    for(int T=0;T<n;T++)
    {
        if(line%2==1){
            for(int i=1;i<n+1;i++)
            {
                cout<<setw(4)<<(line-1)*n+i;
            }
            cout<<endl;}
        else {for(int i=n;i>0;i--)
            {
                cout<<setw(4)<<(line-1)*n+i;
            }
            cout<<endl;}
        line++;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,lh,flag;
    char c[1001]={0},b[1001],d;
    while(cin>>c)
    {
        flag=0;
        n=strlen(c);
        for(int i=0;i<n;i++)if(c[i]=='.'){lh=i;flag=1;}
        if(flag)cout<<n-lh-1<<endl;
        else cout<<0<<endl;
    }

}

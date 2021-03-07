#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char c[1001]={0},b[1001],d;
    while(cin>>c)
    {
        n=strlen(c);
        for(int i=0;i<n-1;i++)
        for(int j=0;j<n-1;j++)if(c[j]>c[j+1]){d=c[j];c[j]=c[j+1];c[j+1]=d;}
        cout<<c<<endl;
    }

}

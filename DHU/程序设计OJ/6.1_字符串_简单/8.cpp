#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,lh,flag,a[26];
    char c[26],b[1001],d;
    while(cin>>b)
    {
        for(int i=0;i<26;i++)a[i]=0;
        for(int i=0;i<26;i++)c[i]=i+65;
        n=strlen(b);
        for(int i=0;i<n;i++)if(b[i]>=97 && b[i] <=122)b[i] -= 32;
        for(int i=0;i<n;i++)if(b[i]>=65 && b[i] <=91)a[b[i]-65]++;
        for(int i=0;i<26;i++)if(a[i]!=0)cout<<c[i]<<':'<<a[i]<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c[1000],b[1000];
    int m,d,n;
    cin>>d;
    cin.get();
    while(d)
    {
        gets(c);
        n=strlen(c);
        for(int i=0;i<n;i++)b[i]=c[n-1-i];
        b[n]=0;
        cout<<b<<endl;
        d--;
    }
    return 0;
}

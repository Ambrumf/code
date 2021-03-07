#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char c[1001],b[1001];
    while(gets(c))
    {
        n=strlen(c);
        if(c[0]=='-')for(int i=1;i<n;i++)cout<<c[i];
        else cout<<c;
        cout<<endl;
    }

}

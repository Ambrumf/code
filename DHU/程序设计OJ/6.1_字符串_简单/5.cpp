#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char c[1001]={0},b[1001],d;
    gets(c);
    n=strlen(c);
    cin.get(d);
    for(int i=0;i<n;i++)while(c[i]==d){for(int j=i;j<n;j++)c[j]=c[j+1];n--;}
    cout<<c<<endl;
    return 0;

}

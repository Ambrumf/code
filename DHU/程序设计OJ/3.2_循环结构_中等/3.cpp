#include <iostream>
#include <iomanip>#include <string>
#include <stdio.h>
using namespace std;

int main()
{
    char ch[11],a[11];
    int n=0;
    for (int j=0;j<11;j++) ch[j]='1';
    cin>>ch;
    n=ch[0]-48;
    for (int i=1;i<11;i++) if(ch[i]>='1' && ch[i]<='9') n*=ch[i]-48;
    for (int j=0;j<11;j++) ch[j]='1';
    snprintf(ch,11,"%d",n);
    while(n>9)
    {
         n=ch[0]-48;
         for (int i=1;i<11;i++) if(ch[i]>='1' && ch[i]<='9') n*=ch[i]-48;
         for (int j=0;j<11;j++) ch[j]='1';
         snprintf(ch,11,"%d",n);
    }
    cout<<n;
    return 0;
}

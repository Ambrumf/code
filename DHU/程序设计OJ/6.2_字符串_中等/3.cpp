#include <bits/stdc++.h>
using namespace std;
char getc(int x)
{
    switch (x)
    {
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:x+=55;break;
    default:
        x+=48;
        break;
    }
    return x;
}
int main()
{
    char c[1000],b[1000];
    int m,d,n;
    while(cin>>m>>d)
    {
        if(m==0){cout<<'0'<<endl;continue;}
        n=0;
        strcpy(c,"");
        strcpy(b,"");
        while(m)
        {
            c[n]=getc(m%d);
            m/=d;
            n++;
        }
        for (int j=0; j<n; j++)b[j]=c[n-1-j];
        for(int i=0;i<n;i++)cout<<b[i];
        cout<<endl;
    }
    return 0;
}

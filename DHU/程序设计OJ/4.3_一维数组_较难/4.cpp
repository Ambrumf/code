#include <iostream>
using namespace std;
int main()
{
    int a[101],n,t=0,sum=0,m=0;
    char c,ch[10000];
    cin>>n;
    cin.get();
    for (int i=0;i<101;i++)a[i]=1;
    while(n--)
    {
        while((c=cin.get())!='\n')
        {
            ch[t]=c;
            t++;
        }
        ch[t]=' ';
        t++;
    }
    for(int i=0; i<t+1; i++)
    {
        if(ch[i]==' ' || i==t)
        {
            a[m]=sum;
            sum=0;
            m++;
        }
         else sum=sum*10+ch[i]-48;
    }
for (int i=0; i<m; i++)while(a[i]==0){for(int j=i;j<m;j++)a[j]=a[j+1];m--;}
    for (int i=0; i<m-1; i++)
        for(int j=0; j<m-1-i; j++)if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
    for(int i=0; i<m-1; i++)if(a[i+1]-a[i]>1)cout<<a[i]+1;
    for(int i=0; i<m-1; i++)if(a[i+1]==a[i])cout<<' '<<a[i]<<endl;
    return 0;
}

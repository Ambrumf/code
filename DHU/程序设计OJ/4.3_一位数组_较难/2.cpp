#include <bits/stdc++.h>
using namespace std;
int a[10001];
int getsum(int i)
{
    int sum=0;
    while(i)
    {
        sum+=i%10;
        i/=10;
    }
    return sum;
}
void fun(int i)
{
    while(i<=10000)
    {
     i+=getsum(i);
     a[i]=0;
    }
}
int main()
{

    int n;
    for (int i=1;i<10001;i++)a[i]=i;
    for (int i=1;i<10001;i++)fun(i);
    cin>>n;
    for (int i=1;i<n;i++)if(a[i]!=0)cout<<a[i]<<endl;
    return 0;
}

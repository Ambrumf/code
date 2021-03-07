#include <bits/stdc++.h>

using namespace std;
long long getreverse(long long a)
{
    long long b=0,t;
    while(a)
    {
        t=a%10;
        b=b*10+t;
        a/=10;
    }
    return b;
}
int main()
{
    long long a,b;
    int flag=0;
    while(cin>>a)
    {
        if(a==0)break;
        do
        {
            b=getreverse(a);
            cout<<a<<'+'<<b<<'='<<a+b<<endl;
            a=a+b;
            if(a==getreverse(a))break;
        }
        while(1);

    }
    return 0;
}

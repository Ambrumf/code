#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,sum,flag;
    while(scanf("%d",&a) != EOF)
    {
        flag=0;
        sum=0;
        cin>>b;
        cout<<a<<'*'<<b<<'=';
        if(a%2==1)
        {
            sum+=b;
            if(!flag)cout<<b;
            else cout<<'+'<<b;
            flag=1;
        }
        while(a != 1)
        {
            a/=2;
            b*=2;
            if(a%2==1)
            {
                sum+=b;
                if(!flag)cout<<b;
                else cout<<'+'<<b;
                flag=1;
            }

        }
        cout<<'='<<sum<<endl;
    }
    return 0;
}

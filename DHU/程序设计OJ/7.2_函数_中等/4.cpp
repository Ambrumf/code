#include <bits/stdc++.h>
using namespace std;
double fun(double i)
{
    if(i==1 || i==2 )return 1;
    return (fun(i-1)+fun(i-2));
}
int main()
{
    int a1,a2,i=1;
    double sum=0;
    cin>>a1>>a2;
    while(1)
    {
        if(a1<= fun(i) && fun(i)<=a2)sum+=fun(i);
        if(fun(i)>=a2)break;
        i++;
    }
    cout<<sum;
    return 0;
}
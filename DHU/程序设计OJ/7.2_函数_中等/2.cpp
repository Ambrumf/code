#include <bits/stdc++.h>
using namespace std;
bool fun(int a,int b)
{
    int sum1=0,sum2=0;
    for(int i=1;i<a;i++)
        if(a%i==0)sum1+=i;
    for(int i=1;i<b;i++)
        if(b%i==0)sum2+=i;
    if(sum1==b && sum2==a)return 1;
    return 0;
}
int main()
{
    int n,a,b;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(fun(a,b))cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}

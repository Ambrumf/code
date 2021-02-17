#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        int mmin=min(min(a,b),c);
        int sum=a+b+c-3*mmin;
        if(sum%3==0 && sum/6<=mmin && (a+b+c)%6==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
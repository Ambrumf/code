#include <bits/stdc++.h>
using namespace std;
char f(int a)
{
    if(a>=0 && a<=9)return a+48;
    else return a+87;
}
long long HtoD(string a)
{
    int len=a.size();
    long long x=0;
    for(int i=0;i<len;i++){
        x*=16;
        if(a[i]>='0' && a[i]<='9')x+=a[i]-48;
        else x+=a[i]-87;
    }
    return  x;
}
string DtoH(long long a)
{
    string x="";
    while(a)
    {
        int t=a%16;
        a/=16;
        x.insert(x.begin(),f(t));
    }
    return x;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        long long sum=HtoD(a)+HtoD(b);
        string ans=DtoH(sum);
        cout<<ans<<endl;
    }
    return 0;
}
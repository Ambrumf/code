#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
    string an[201];
string funa(int i,int n)
{
    if(i==1)return "sin("+to_string(n)+")";
    string tmp;
    if((n+1-i)%2==0)tmp="sin("+to_string(n+1-i)+"-"+funa(i-1,n)+")";
    else tmp="sin("+to_string(n+1-i)+"+"+funa(i-1,n)+")";
    return tmp;
}
string funm(int i,int n)
{
    if(i==1)return an[1]+"+"+to_string(n);
    string tmp;
    tmp="("+funm(i-1,n)+")"+an[i]+"+"+to_string(n+1-i);
    return tmp;

}
int main()
{
    int k,n;
    cin>>k;
    n=k;
    for(int i=1;i<n+1;i++)
    {
        an[i]=funa(i,i);
    }
    string x=funm(k,n);
    cout<<x;
    return 0;
}

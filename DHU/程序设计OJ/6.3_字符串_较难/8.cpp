#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<t+1;i++)
    {
        string a,b,ans;
        cin>>a>>b;
        printf("Case %d:\n",i);
        cout<<a<<" + "<<b<<" = ";
        int n=max(a.length(),b.length());
        int aa[1001]={};
        for(int i=0;i<a.length();i++)aa[n-1-i]+=*(a.end()-1-i)-48;
        for(int i=0;i<b.length();i++)aa[n-1-i]+=*(b.end()-1-i)-48;
        for(int i=n-1;i>0;i--)if(aa[i]>=10){
            aa[i]-=10;aa[i-1]+=1;
        }
        int flag=0;
        if(aa[0]>=10){flag=1;aa[0]-=10;}
        if(flag)cout<<1;
        for(int i=0;i<n;i++)cout<<aa[i];
        cout<<endl<<endl;
    }
    return 0;
}
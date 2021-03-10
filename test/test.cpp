#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("data.in","r",stdin);
    freopen("wrong.out","w",stdout);
   int a,b,c;
   string t[1000],t2[1000];
   string k;
   map<string,int> n;
   map<string,int>::iterator it;
   while(cin>>a>>b>>c)
   {
       int p=0;
       for(int i=0;i<a;i++)
       {
           cin>>t[p];
           p++;
       }
       for(int i=0;i<b;i++)
       {
           cin>>k;
           n[k]=1;
       }
       for(int i=0;i<c;i++)
       {
           cin>>k;
           if(n[k]==1)
           {
               n[k]=2;
           }
           n[k]=2;
       }
       int su=0;
       for(int i=0;i<a;i++)
       {
           if(n[t[i]]==1)
           {
               t2[su]=t[i];
               su++;
           }
       }
       if(su==0)
       {
           cout<<"No enemy spy"<<endl;
       }
       else
       {
           for(int i=0;i<su;i++)
           {
               cout<<t2[i];
               if(i!=su-1)
                cout<<" ";
           }
           cout<<endl;
       }
   }
   return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
   //freopen("data.in","r",stdin);
   //freopen("wrong.out","w",stdout);
   string a;
   int b=0;
   while(cin>>a)
   {
       if(a=="<br>")
       {
           cout<<endl;
           b=0;
       }
       else if(a=="<hr>")
       {
           if(b!=0)
           {
               cout<<endl;
               for(int i=0;i<80;i++)
                {cout<<"-";}
               cout<<endl;
               b=0;
           }
           else
           {
            for(int i=0;i<80;i++)
                {cout<<"-";}
            cout<<endl;
            b=0;
           }
       }
       else
       {
           if(b==0)
           {
              cout<<a;
              b=a.length();
           }
           else if(b+a.length()>81)
           {
               cout<<endl;
               cout<<a;
               b=a.length();
           }
           else
           {
               cout<<" "<<a;
               b=b+1+a.length();
           }
       }
   }
   if(b!=0)
   {
       cout<<endl;
   }
   return 0;
}
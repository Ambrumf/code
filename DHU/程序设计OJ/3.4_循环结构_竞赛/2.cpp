#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a=0,b=0,n;
    while(cin>>n)
    {
     if(n==0)break;
     for(int k=0;;k++)
     {
         if(n>=3){b=n/3;a+=b;};
         if(n==2){a++;break;}
         if(n<=1)break;
         n=n%3+b;
     }
     cout<<a<<endl;
     a=0;
    }
}

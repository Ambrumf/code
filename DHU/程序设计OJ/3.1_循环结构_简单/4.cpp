#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int a,b,c,d,e,num;
   a=0;
   b=0;
   c=0;
   d=0;
   e=0;
   while(cin>>num)
   {
   if(num<10) a=num,cout<<a<<endl;
   if(num<100 && num >9) a=num % 10,b=num / 10,cout<<a+b<<endl;
   if(num<1000 && num >99) a=num % 10,b=(num / 10) % 10,c=num/100,cout<<a+b+c<<endl;
   if(num<10000 && num >999) a=num % 10,b=(num / 10) % 10,c=(num / 100) % 10,d=num/1000,cout<<a+b+c+d<<endl;
   if(num>9999) a=num % 10,b=(num / 10) % 10,c=(num / 100) % 10,d=(num / 1000) % 10,e=num / 10000,cout<<a+b+c+d+e<<endl;
   }
   return 0;

}

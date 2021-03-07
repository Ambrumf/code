#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a,b,c,d,e,n;
    int k=0;
    a=0,b=0,c=0,d=0,e=0;
    while(cin>>n)
    {

        for(int num=1; num<=n; num++)
        {
            if(num<10) a=num;
            if(num<100 && num >9) a=num % 10,b=num / 10;
            if(num<1000 && num >99) a=num % 10,b=(num / 10) % 10,c=num/100;
            if(num<10000 && num >999) a=num % 10,b=(num / 10) % 10,c=(num / 100) % 10,d=num/1000;
            if(num>9999) a=num % 10,b=(num / 10) % 10,c=(num / 100) % 10,d=(num / 1000) % 10,e=num / 10000;
            if(num%3 == 0 && (a==5 || b==5 || c==5 || d==5 || e==5)) k++;

        }
        cout<<k<<endl;
        k=0;
    }
    return 0;

}

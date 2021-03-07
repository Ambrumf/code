#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num,a,b,c,d;
    cin>>num;
    if(num<=0||num>9999) cout<<"error!";
    else if (num>=1000)
    {
        a=num/1000;
        b=num%1000/100;
        c=num%100/10;
        d=num%10;
        num=1000*d+100*c+10*b+a;
        cout<<setw(4)<<setfill('0')<<num;
    }
    else if(num>=100)
    {
        a=num/100;
        b=num%100/10;
        c=num%10;
        num=100*c+10*b+a;
        cout<<setw(3)<<setfill('0')<<num;
    }
    else if (num>=10)
    {
        a=num/10;
        b=num%10;
        num=10*b+a;
        cout<<setw(2)<<setfill('0')<<num;
    }
    else cout<<num;
    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a,b,c,x;

    while(cin>>a>>b>>c)
    {
    if(a==0&&b==0&&c==0) break;
    if(a>b);
        else x=a,a=b,b=x;
    if(b>c);
        else if(a>c) x=b,b=c,c=x;
             else x=a,a=c,c=b,b=x;
    if(a*a==b*b+c*c) cout<<"right"<<endl;
    else cout<<"wrong"<<endl;

    }
    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n,sum,i;
    sum=0;
    double a;
    while(cin>>n)
    {
        for(i=1;i<=n;i++)
        {
            if(n%i==0) sum+=i;
        }
        a=(double)sum/n;
        cout<<fixed<<setprecision(2)<<a<<endl;
        sum=0;
    }
    return 0;
}

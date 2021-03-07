#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n,i,N;
    int flag=0;
    cin>>n;
    N=n;
    cout<<n<<'=';
    for(i=2;i<=N;)
    {
        if(n%i==0)
        {
            n=n/i;
            if(flag)cout<<'*'<<i;
            else cout<<i;
            flag=1;
        }
        else i++;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    double h=0.01,n,N;
    cin>>N;
    for(int i=0;h<N;i++)
    {
        h*=2;
        n=i;
    }
    n+=1;
    cout<<n;
    return 0;
}



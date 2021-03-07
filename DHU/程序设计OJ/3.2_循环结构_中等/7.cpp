#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,x=0;
    cin>>n;
    for(int i=0;n!=0;i++)
    {
        n=n/2;
        x=i+1;
    }
    cout<<x;
    return 0;
}

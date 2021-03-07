#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int n,t=1;
int main()
{
    while(cin>>n)
    {
    t=1;
    for(int i=1;i<n;i++)t=2*(t+1);
    cout<<t<<endl;
    }
    return 0;



}

#include <bits/stdc++.h>
using namespace std;
double fact(double n)
{
    double sum=1;
    for(int i=2;i<n+1;i++)sum*=i;
    return sum;
}

int main ()
{
    double m,n;
    cin>>m>>n;
    cout<<(fact(m)/fact(m-n))<<endl;
    return 0;
}

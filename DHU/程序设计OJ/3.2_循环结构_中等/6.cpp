#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int year,m,d,sum=0;
    cin>>year>>m>>d;
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) month[2]=29;
    for (int i=0;i<=m-1;i++) sum+=month[i];
    cout<<d+sum;
    return 0;
}

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int month[]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int sum=0;
    int year,k=4;
    cin>>year;
    for(int i=1998; i<year; i++)
    {
        if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0)) k=(k-1+366)%7+1;
        else k=(k-1+365)%7+1;
    }
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) month[2]=29;
    for (int i=1; i<=12; i++)
        for(int j=1; j<=month[i]; j++)
        {
            if(k==5 && j==13) sum+=1;
            k=(k)%7+1;

        };
    cout<<sum;
    return 0;
}

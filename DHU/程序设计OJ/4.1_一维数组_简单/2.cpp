#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <stdio.h>
using namespace std;
int main()
{

int a[8]={0},n;
a[7]=2;
for(int i=7;i>=2;i--)
    a[i-1]=(a[i]+1)*2;
while(cin>>n){cout<<a[n]+2<<' '<<a[n]<<endl;}
return 0;
}

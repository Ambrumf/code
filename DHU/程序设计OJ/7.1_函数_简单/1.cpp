#include <bits/stdc++.h>
using namespace std;

int tongji(double mark[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)if(mark[i]<60)sum++;
    return sum;
}

int main ()
{

   double mark[40];

   int m,n,count;

   cin>>n;
    if(n==0) {cout<<0;return 0;}
   for (m=0;m<n;m++)

   {

      cin>>mark[m];

   }

    cout<<tongji(mark, n);
    return 0;

}

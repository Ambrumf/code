#include <bits/stdc++.h>
using namespace std;

int ctof(int i)
{
    int F;
    F=32+i*9/5;
    return F;
}
int main()
{

      int i,start,end;

      cin>>start>>end;

      for(int i=start;i<=end;i+=10){

             cout<<i<<"C="<<ctof(i)<<'F'<<endl;

      }

      return 0;

}

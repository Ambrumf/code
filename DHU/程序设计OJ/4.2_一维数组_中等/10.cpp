#include <bits/stdc++.h>
using namespace std;
int getsum(int x)
{
    int sum=0;
    if(x>=100){sum+=x/100;x%=100;}
    if(x>=50){sum+=x/50;x%=50;}
    if(x>=20){sum+=x/20;x%=20;}
    if(x>=10){sum+=x/10;x%=10;}
    if(x>=5){sum+=x/5;x%=5;}
    if(x>=2){sum+=x/2;x%=2;}
    sum+=x;
    return sum;
}
int main()
{
    int T,n,x,sum;
    cin>>T;
    while(T)
    {
       sum=0;
       cin>>n;
       for (int i=0;i<n;i++){cin>>x;sum+=getsum(x);}
       cout<<sum<<endl;
       T--;
    }
    return 0;
}

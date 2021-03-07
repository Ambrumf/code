#include <bits/stdc++.h>
using namespace std;
int getval(int i,int j,int n)
{
    return min(min(i+1,j+1),min(n-i,n-j));
}

int main()
{
    int m,n,product,quotient;
    int a[25][25];
    cin>>n;
    for (int i=0; i<2*n-1; i++)
    {
        for(int j=0; j<2*n-1; j++)
        {
            {if(j==0)cout<<getval(i,j,2*n-1);
            else cout<<' '<<getval(i,j,2*n-1);}
        }
        cout<<endl;
    }
    return 0;
}

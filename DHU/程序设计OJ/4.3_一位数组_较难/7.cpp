#include <bits/stdc++.h>
# include <stdio.h>

using namespace std;
bool judgefac(int x)
{
    if (x==1)return false;
    if (x==2)return true;
    int flag=0;
    for(int k=2; k<sqrt(x)+1; k++)
    {
        if(x%k==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)return true;
    else return false;
}

int main()
{
    int x,j;
    while(cin>>x)
    {
        if(x<0) break;
        j=0;
        for(int i=1;  i<x-1; i++)
        {
        if(judgefac(i) && judgefac(i+2))j++;
        }
        cout<<j<<endl;
    }
    return 0;
}

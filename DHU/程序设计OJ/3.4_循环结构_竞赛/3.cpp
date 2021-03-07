#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int a[1000000],b[1000000],sum,c=0;
void fac(int n,int i,int k,int n0)
{
    if(i>=k)return;
    if(n%b[i]==0)fac(n/b[i],i,k,n0);
    if((n%b[i]!=0) && (n0%b[i]==0)){c+=b[i];fac(n,i+1,k,n0);}
    if((n%b[i]!=0) && (n0%b[i]!=0))fac(n,i+1,k,n0);

}
int main()
{
    int n,k=0,flag;

    for (int i=1; i<10001; i++)a[i]=i; //筛出10000以内的质数
    for (int i=2; i<1001; i++)
    {
        if(a[i]!=0 )
        {
            for(int j=i+1; j<10001; j++)
            {
                if(a[j]%i==0)a[j]=0;
            }
        }
    }
    for(int i=2; i<10001; i++) if(a[i]!=0)
        {
            b[k]=a[i];    //将筛出的质数存入b[]中
            k++;
        }
    while(cin>>n)
    {
        c=0;
        flag=0;
        for(int i=0; i<k; i++)
        {
            if(n%b[i]==0)
                flag=1;
        }
        if(flag==0)cout<<n;
        else {fac(n,0,k,n);cout<<c;}
        cout<<endl;
    }
    return 0;
}

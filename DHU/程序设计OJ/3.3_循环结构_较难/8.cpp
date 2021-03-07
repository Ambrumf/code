#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <stdio.h>
using namespace std;

int gettime()
{
    char c[50];
    int n,h1,m1,s1,h2,m2,s2,t,d=0;
        cin.getline(c,50);
        int length= strlen(c);
        if(strlen(c)<18) sscanf(c,"%d:%d:%d %d:%d:%d",&h1,&m1,&s1,&h2,&m2,&s2);
        else sscanf(c,"%d:%d:%d %d:%d:%d (+%d)",&h1,&m1,&s1,&h2,&m2,&s2,&d);
        t=d*24*3600+h2*3600+m2*60+s2-(h1*3600+m1*60+s1);
    return t;
}
int main()
{
    int n,t1,t2,t0;
    cin>>n;
    cin.get();
    for(int i=0;i<n;i++)
    {
        t1=gettime();
        t2=gettime();
        t0=(t1+t2)/2;
    int h0,m0,s0;
    h0=t0/3600;
    m0=t0%3600/60;
    s0=t0%60;
    cout<<setfill('0')<<setw(2)<<h0<<':'<<setw(2)<<m0<<':'<<setw(2)<<s0<<endl;
    }
}

#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
#include <stdio.h>
#include <cstring>
#include <tuple>
int N,n,t,v[10000][3];
using namespace std;
typedef long long ll;
double sum(double x){
    double mmax=-1e10,a,b,c;
    for(int i=0;i<t;i++){
        a=v[i][0],b=v[i][1],c=v[i][2];
        mmax=max(a*x*x+b*x+c,mmax);
    }
    return mmax;
}
int main()
{
    cin >> N;
    while (N--)
    {
        while (~scanf("%d",&t))
        {
            for(int i=0;i<t;i++)cin>>v[i][0]>>v[i][1]>>v[i][2];
            double l=0,r=1000,lmid,rmid,lsum,rsum;
            while(r-l>1e-9){
                lmid=l+(r-l)/3;
                rmid=l+(r-l)/3*2;
                lsum=sum(lmid);
                rsum=sum(rmid);
                if(lsum<rsum)r=rmid;
                else l=lmid;
            }
            //cout<<l<<' '<<r<<' '<<lsum;
            printf("%.4lf\n",lsum);
        }
    }
    return 0;
}   
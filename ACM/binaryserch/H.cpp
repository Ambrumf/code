#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
#include <stdio.h>
#include <cstring>
using namespace std;
typedef long long ll;
ll T,N,x[301],y[301],vx[301],vy[301];
double l,r,lmid,rmid,lsum,rsum;
double sum(double t){
    double sum=-1e-9,x1,y1,x2,y2;
    for(int i=0;i<N;i++)
        for(int j=i+1;j<N;j++){
            x1=x[i]+t*vx[i];y1=y[i]+t*vy[i];
            x2=x[j]+t*vx[j];y2=y[j]+t*vy[j];
            sum=max(sum,sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
        }
    return sum;
}
int main()
{
    scanf("%lld",&T);
    for(int k=1;k<=T;k++){
        scanf("%lld",&N);
        for(int i=0;i<N;i++)scanf("%lld%lld%lld%lld",x+i,y+i,vx+i,vy+i);
        l=0,r=1e10;
        do{
            lmid=l+(r-l)/3;
            rmid=l+(r-l)/3*2;
            lsum=sum(lmid);
            rsum=sum(rmid);
            if(lsum<rsum)r=rmid;
            else l=lmid;
        }while(r-l>1e-9);
        printf("Case #%d: %.2lf %.2lf\n",k,lmid,lsum);
    
    }
    return 0;
}
/*2
2
0 0 1 0
2 0 -1 0
2
0 0 1 0
2 1 -1 0
*/
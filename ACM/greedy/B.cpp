#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#include <iomanip>
#include <stdio.h>
using namespace std;
int main()
{
    double N,M,cp=1e8,sum=0; 
    scanf("%lf %lf",&N,&M);
    while(N--){
        double c,y;
        scanf("%lf %lf",&c,&y);
        cp=min(cp+M,c);
        sum+=min(cp,c)*y;
    }
    cout<<setprecision(16)<<sum;
    return 0;
}
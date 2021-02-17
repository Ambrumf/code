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
class clock
{
    public:
    int hour,minute;
    clock(){};
    clock(int a,int b){
        hour=a,minute=b;
    }
    void addtime(int t){
        minute+=t;
        int tmp=minute/60;minute%=60;
        hour+=tmp;
        hour%=24;
    }
};
class cus{
    public:
    class clock time;
    int id,num;
    cus(){};
    cus(int a,int b,int c,int d):time(a,b),id(c),num(d){};

};
int main()
{
    int T;
    cus aa[1001];
    scanf("%d",&T);
    while(T--){
        int n,t,k,m,a,b,c,d,i;
        scanf("%d:%d %d %d",&n,&t,&k,&m);
        for(int i=0;i<m;i++){
            scanf("%d:%d %d %d",&a,&b,&c,&d);
            aa[i]=cus(a,b,c,d);
        }
        class clock now=aa[0].time;
        for(i=0;i<m;i++){
            
        }
    }
    return 0;
}

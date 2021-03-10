#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n;
    scanf("%d",&n);
    vector<double> miner,diamond;
    double sum=0;
    for(int i=0;i<2*n;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        if(a==0)miner.push_back(abs(b));
        else diamond.push_back(abs(a));


    } 
    sort(miner.begin(),miner.end());
    sort(diamond.begin(),diamond.end());
    while(!miner.empty()){
        sum+=sqrt(miner.back()*miner.back()+diamond.back()*diamond.back());
        miner.pop_back();
        diamond.pop_back();
    }
    printf("%.15lf\n",sum);
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)solve();
    return 0;
}
/*
3
2
0 1
1 0
0 -1
-2 0
4
1 0
3 0
-5 0
6 0
0 3
0 1
0 2
0 4
5
3 0
0 4
0 -3
4 0
2 0
1 0
-3 0
0 -10
0 -2
0 -10
outputCopy
3.650281539872885
18.061819283610362
32.052255376143336*/
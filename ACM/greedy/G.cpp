#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#include <iomanip>
#include <stdio.h>
typedef long long ll;
using namespace std;
int main()
{
    vector<vector<int> > v;
    int n,t;
    while(cin>>n){
        deque<int> d;
        while(n--){
            scanf("%d",&t);
            d.push_back(t);
        }
        sort(d.begin(),d.end());
        deque<int>::iterator it=(upper_bound(d.begin(),d.end(),d.front()));
        while(it!=d.end()){
            
        }
    }
}
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
    int R,n;
    while(scanf("%d%d",&R,&n))
    {
        if(R==-1 && n==-1)break;
        vector<int> v;
        while(n--){
            int t;
            scanf("%d",&t);
            v.push_back(t);
        }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        int n=v.size();
        int sum=0;
        int i=0;
        while(i<n)
        {
            int s=v[i++];
            while(i<n && v[i]-s<=R)i++;
            int p=v[i-1];
            while(i<n && v[i]-p<=R)i++;
            sum++;
        }
        cout<<sum<<endl;
    }
}   
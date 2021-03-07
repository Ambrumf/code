#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        set<int> s;
        vector<int> v;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int tmp;
            cin>>tmp;
            v.push_back(tmp);
        }
        v[n-1]++;
        for(int i=n-2;i>0;i--)if(v[i+1]-v[i]>1)v[i]++;
        for(int i=0;i<n;i++)s.insert(v[i]);
        cout<<s.size()<<endl;
    }
    return 0;
}
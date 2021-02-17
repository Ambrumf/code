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
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)s.insert(v[j]-v[i]);
        cout<<s.size()<<endl;
    }
    return 0;
}
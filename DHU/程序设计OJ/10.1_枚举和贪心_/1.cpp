#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    deque<int> d,room;
    int n,r,sum=0;
    cin>>n>>r;
    while(n--)
    {
        int t;
        cin>>t;
        d.push_back(t);
    }
    sort(d.begin(),d.end());
    while(!d.empty())
    {
        if(room.size()<r)
        {
            room.push_back(d.front());
            sum+=d.front();
            d.pop_front();
        }
        else {
            sort(room.begin(),room.end());
            room.front()+=d.front();
            sum+=room.front();
            d.pop_front();
        }
    }
    cout<<sum;
    return 0;
}

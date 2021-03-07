#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>
const int N=10000;
using namespace std;
struct segment
{
    int L;
    int R;
};
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    struct cmp
    {
        bool operator()(segment a, segment b)
        {
            if ((a.R - a.L) != (b.R - b.L))
                return a.R - a.L < b.R - b.L;
            else return a.L > b.L;
        }
    };
    priority_queue<segment, vector<segment>, cmp> q;
    int t,j=1;
    cin >> t;
    vector<int> vec(t,0);
    segment seg;
    seg.L = 0;
    seg.R = t - 1;
    q.push(seg);
    while (!q.empty())
    {
        int L = q.top().L;
        int R = q.top().R;
        if(R-L>1)
        {
            q.pop();
            segment seg1, seg2;
            seg1.L = L;
            if ((R - L + 1) % 2 == 1)
            {
                seg1.L = L;
                seg1.R = (L + R) / 2 - 1;
                seg2.L = (L + R) / 2 + 1;
                seg2.R = R;
                vec[(L + R) / 2]=j;
            }
            else
            {
                seg1.L = L;
                seg1.R = (L + R - 1) / 2 - 1;
                seg2.L = (L + R - 1) / 2 + 1;
                seg2.R = R;
                vec[(L + R - 1) / 2]=j;
            }
            q.push(seg1);
            q.push(seg2);
        }
        else if(R-L==0){
            q.pop();
            vec[L]=j;}
            else{
                q.pop();
                segment seg1, seg2;
                seg2.L=R;
                seg2.R=R;
                vec[L]=j;
                q.push(seg2);
            }
        j++;
    }
    for(int i=0;i<t;i++){
        if(i>0)cout<<' '<<vec[i];
        else cout<<vec[i];
    }
    cout<<endl;
    }
    return 0;
}
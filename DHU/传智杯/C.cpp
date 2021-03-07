#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
    struct n
    {
        double num;
        double t;
        double dif;
        double score;
    };
    bool cmp(n a,n b){ 
        if(a.score!=b.score)return a.score>b.score;
        else if(a.t!=b.t)return a.t>b.t;
        else return a.num<b.num;
    }
int main()
{
    vector<n> v;
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        double a,b;
        scanf("%lf%lf",&a,&b);
        n tmp;
        tmp.num=i+1;
        tmp.t=a;
        tmp.dif=b;
        tmp.score=tmp.dif*tmp.t;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<v.size();i++)
    {if(i>0)cout<<' ';
    cout<<v[i].num;}

    return 0;
}
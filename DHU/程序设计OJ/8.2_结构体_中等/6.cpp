#include <bits/stdc++.h>
using namespace std;
struct rectangle
{
    int num;
    int lenth;
    int width;
};
bool operator==(const rectangle& a,const rectangle &b)
{
    if(a.lenth==b.lenth && a.num==b.num && a.width==b.width)return 1;
    return 0;
}
bool cmp(rectangle a,rectangle b)
{
    if(a.num!=b.num)return a.num<b.num;
    else if(a.lenth!=b.lenth)return a.lenth<b.lenth;
    else return a.width<b.width;
    
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int m;
        vector<rectangle> v;
        cin>>m;
        while(m--)
        {
            int a,b,c;

            scanf("%d%d%d",&a,&b,&c);
            if(b<c)swap(b,c);
            rectangle tmp={a,b,c};
            v.push_back(tmp);
        }
        sort(v.begin(),v.end(),cmp);
        auto it=unique(v.begin(),v.end());
        v.erase(it,v.end());
        for(auto x:v)printf("%d %d %d\n",x.num,x.lenth,x.width);
        cout<<endl;
    }
    return 0;
}
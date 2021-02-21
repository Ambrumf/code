#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;

int main()
{
    ll n,m,p;
    cin>>n>>m>>p;
    while(p--){
        ll x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y1;
        {
            if(x1==x2){
                if(y2-y1==1 || y1-y2==1 || (x1==1 && (y1==1 && y2==n || y1==n && y2==1) ) || (x1==2 && (y1==1 && y2==m || y1==m &&y2==1) ))cout<<"yes"<<endl;
                else cout<<"no"<<endl;
            }
            else {
                double l1,r1,l2,r2;
                if(x1==1){
                    l1=(y1-1)/n;r1=y1/n;}
                else {
                    l1=(y1-1)/m;r1=y1/m;
                }
                if(x2==1){
                    l2=(y2-1)/n;r2=y2/n;}
                else {
                    l2=(y2-1)/m;r2=y2/m;}
                if(l1<r2 && l2<r1)cout<<"yes"<<endl;
                else cout<<"no"<<endl;
            }
        }   
    }
    return 0;
}
/*
Input
4 6 3
1 1 2 3
2 6 1 2
2 6 2 4
Output
YES
NO
YES
*/
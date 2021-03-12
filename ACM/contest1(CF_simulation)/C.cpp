#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;

int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6;
    int a,b;
    cin>>x1>>y1>>x2>>y2;
    cin>>x3>>y3>>x4>>y4;
    cin>>x5>>y5>>x6>>y6;
    if(x3<=x1 && x4>=x2 && y3<=y1 && y4>=y2){x1=x2;y1=y2;}
    //cout<<x1<<' '<<y1<<' '<<x2<<' '<<y2<<endl;
    if(x5<=x1 && x6>=x2 && y5<=y1 && y6>=y2){x1=x2;y1=y2;}
    //cout<<x1<<' '<<y1<<' '<<x2<<' '<<y2<<endl;
    if(x3<=x1 && x4>=x2){
        if(y3<=y2 && y4>=y2)y2=max(y1,y3);
        if(y3<=y1 && y4>=y1)y1=min(y2,y4);
    }
    //cout<<"!1"<<endl;
    //cout<<x1<<' '<<y1<<' '<<x2<<' '<<y2<<endl;
    if(y3<=y1 && y4>=y2){
        if(x3<=x1 && x4>=x1)x1=min(x2,x4);
        if(x3<=x2 && x4>=x2)x2=max(x1,x3);
    }
    //cout<<"!2"<<endl;
    //cout<<x1<<' '<<y1<<' '<<x2<<' '<<y2<<endl;
    if(x5<=x1 && x6>=x2){
        if(y5<=y2 && y6>=y2)y2=max(y1,y5);
        if(y5<=y1 && y6>=y1)y1=min(y2,y6);
    }
    //cout<<x1<<' '<<y1<<' '<<x2<<' '<<y2<<endl;
    if(y5<=y1 && y6>=y2){
        if(x5<=x1 && x6>=x1)x1=min(x2,x6);
        if(x5<=x2 && x6>=x2)x2=max(x1,x5);
    }
    //a=x2-x1;b=y2-y1;
    //cout<<a<<' '<<b<<endl;
    if(x2==x1 && y2==y1)cout<<"NO";
    else cout<<"YES";
    return 0;
}

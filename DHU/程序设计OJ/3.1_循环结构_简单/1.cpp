#include <iostream>

using namespace std;

int main()
{
    int n,y,m,d,y0,m0,d0,y1,m1,d1;
    y=0,m=0,d=d,y0=99999,m0=13,d0=32,y1=0,m1=0,d1=0;
    cin>>n;
    for (int i=0;i<n;++i)

    {
        cin>>y>>m>>d;
        if(y<y0) y0=y,m0=m,d0=d;
        if(y==y0) if(m<m0) y0=y,m0=m,d0=d;
        if(y==y0 && m == m0) if(d<d0) y0=y,m0=m,d0=d;

        if(y>y1) y1=y,m1=m,d1=d;
        if(y==y1) if(m>m1) y1=y,m1=m,d1=d;
        if(y==y1 && m == m1) if(d>d1) y1=y,m1=m,d1=d;

    }
    cout<<y1<<' '<<m1<<' '<<d1<<endl<<y0<<' '<<m0<<' '<<d0<<endl;
    return 0;
}



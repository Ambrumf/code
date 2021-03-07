#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int d1,d2,m1,m2,y1,y2;
    while (cin>>d1>>m1>>y1>>d2>>m2>>y2)
    {
        if (y1>y2) cout<<setfill('0')<<setw(2)<<d2<<' '<<setw(2)<<m2<<' '<<y2<<" is earlier than "<<setw(2)<<d1<<' '<<setw(2)<<m1<<' '<<y1<<endl;
        if (y1<y2) cout <<setfill('0')<<setw(2)<<d1<<' '<<setw(2)<<m1<<' '<<y1<<" is earlier than "<<setw(2)<<d2<<' '<<setw(2)<<m2<<' '<<y2<<endl;
        if (y1==y2)
        {
         if (m1>m2) cout<<setfill('0')<<setw(2)<<d2<<' '<<setw(2)<<m2<<' '<<y2<<" is earlier than "<<setw(2)<<d1<<' '<<setw(2)<<m1<<' '<<y1<<endl;
         if (m1<m2) cout <<setfill('0')<<setw(2)<<d1<<' '<<setw(2)<<m1<<' '<<y1<<" is earlier than "<<setw(2)<<d2<<' '<<setw(2)<<m2<<' '<<y2<<endl;
         if (m1==m2)
            {
                if (d1>d2) cout<<setfill('0')<<setw(2)<<d2<<' '<<setw(2)<<m2<<' '<<y2<<" is earlier than "<<setw(2)<<d1<<' '<<setw(2)<<m1<<' '<<y1<<endl;
                if (d1<d2) cout <<setfill('0')<<setw(2)<<d1<<' '<<setw(2)<<m1<<' '<<y1<<" is earlier than "<<setw(2)<<d2<<' '<<setw(2)<<m2<<' '<<y2<<endl;
            }

        }
    }
    return 0;
}

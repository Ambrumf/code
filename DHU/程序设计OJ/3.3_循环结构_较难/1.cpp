#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double an,threshold,sn,x,i,a,b,c,bn;
    sn=1;
    a=1;
    b=1;
    c=1;
    int flag=0;
    while(cin>>x>>threshold)
    {
        if(flag==1) cout<<endl;
        if(1<threshold) {cout<<"0.000000"<<endl;continue;}
        for(i=1;; i++)
        {
            a*=0.5-(i-1);
            b*=i;
            c*=x;
            an=a*c/b;
            if(an<0) bn=-an;
            else bn=an;
            if(bn<threshold) break;
            sn+=an;
        }
        cout<<fixed<<setprecision(6)<<sn<<endl;
        sn=1;
        a=1;
        b=1;
        c=1;
        flag=1;
    }

    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a[37],b[37],n,sum=0;
    double c[37];
    a[0]=2,a[1]=3;
    b[0]=1,b[1]=2;
    while(cin>>n)
    {
        for(int i=0;i<n;i++)//定义前n项的分子分母
        {
            if(i>=2)a[i]=a[i-2]+a[i-1],b[i]=b[i-2]+b[i-1];
        }
        for(int j=0;j<n;j++) c[j]=a[j]/b[j];
        for(int k=0;k<n;k++) sum+=c[k];
        cout<<fixed<<setprecision(6)<<sum<<endl;
        sum=0;
    }
    return 0;
}

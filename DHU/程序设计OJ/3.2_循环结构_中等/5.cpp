#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int ch[22];
    for (int i=0; i<20; i++) ch[i]=0;
    int a,b,L,R,x,sum=0;
    cin>>L>>R;
    for (x=L; x<=R; ++x)
    {
        a=x;
        for (int k=0; a!=0; k++) //将x转换为二进制数并写入ch[]
        {

            b=a % 2;
            a=a / 2;
            ch[k]=b;

        }
        for (int j=0; j<20; j++) sum+=ch[j];
        for (int i=0; i<20; i++) ch[i]=0;
    }
    cout<<sum;
    return 0;
}

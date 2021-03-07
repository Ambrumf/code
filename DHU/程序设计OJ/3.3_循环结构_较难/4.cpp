#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int prin,j,a,b,c,d,e,f;
    int sum=0;
    int flag=0;
    cin>>prin;
    for(int i=10000;i<1000000;i++)
    {
        j=i;
        while(j!=0)
        {
            sum+=j%10;
            j=j/10;
        }
        if(sum!=prin)
        {
            sum=0;
            continue;
        }
        sum=0;
        if(i<100000)
        {
            a=i%10;
            b=i/10%10;
            c=i/100%10;
            d=i/1000%10;
            e=i/10000;
            if(a==e && b==d) cout<<i<<endl;
            flag=1;
        }
        else
        {
            a=i%10;
            b=i/10%10;
            c=i/100%10;
            d=i/1000%10;
            e=i/10000%10;
            f=i/100000;
            if(a==f && b==e &&c==d) cout<<i<<endl;
            flag=1;
        }

    }
        if(flag==0) cout<<-1;
}

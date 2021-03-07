#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num,a,b;
    cin>>num;
    for (int i=0;i<num;i++)
    {
        cin>>a>>b;
        if(a>b) cout<<"win"<<endl;
        if(a<b) cout<<"lose"<<endl;
        if(a==b) cout<<"same"<<endl;

    }


    return 0;
}

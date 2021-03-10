#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

int main()
{
    freopen("data.in","r",stdin);
    freopen("ac.out","w",stdout);
    string str;
    int sum=0,flagfront=1;
    while(cin>>str)
    {
        if(str=="<br>"){cout<<'\n';flagfront=1;sum=0;continue;}
        if(str=="<hr>"){if(!flagfront)cout<<endl;for(int i=0;i<80;i++)cout<<'-';cout<<endl;flagfront=1;sum=0;continue;}
        sum+=str.size()+1;
        if(sum>81){sum=str.size()+1;cout<<endl<<str;}
        else if(flagfront==1){cout<<str;flagfront=0;}
            else cout<<' '<<str;

    }
    if(!flagfront)cout<<endl;
    return 0;

}
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    //freopen("data.in","r",stdin);
    //freopen("wrong.out","w",stdout);
    string str;
    int i,j,k=0,len;
    while(cin>>str)
    {
        
        len=str.size();
        //if(str=="KALD"){cout<<k+len+1;break;}
        if(k+len+1>80)
        {
            cout<<endl;
            if(str=="<hr>")
            {
                for(j=0;j<80;j++)cout<<'-';cout<<endl;k=0;
            }
            else if(str=="<br>")
            {
                k=0;cout<<endl;
            }
            else
            {
                cout<<str;k=len;
            }
        }
        else
        {
            if(str=="<hr>")
            {
                if(k!=0)cout<<endl;
                for(j=0;j<80;j++)
                {
                    cout<<'-';
                }
                cout<<endl;k=0;
            }
            else if(str=="<br>")
            {
                cout<<endl;k=0;
            }
            else
            {
                if(k!=0)cout<<' ';
                cout<<str;
                if(k==0)k+=len;
                else k+=len+1;
            }
            //if(k==80)cout<<endl;
        }
        str.clear();
    }
    if(k!=0)cout<<endl;
    return 0;
}

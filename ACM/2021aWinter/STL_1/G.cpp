#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
            string str;
            int lh=0;
            cin>>str;
            for(int i=0;i<str.size();i++)
            {
                if(str[i]=='#')
                {
                    int x=0;
                    string tmp=str.substr(lh,i-lh);
                    for(int j=0;j<tmp.size();j++)
                    {
                        if(tmp[j]!='-'){x*=10;x+=tmp[j]-48;}
                        if(tmp[j]=='-'){cout<<(char)(x+64);x=0;}
                        if(j==tmp.size()-1){cout<<(char)(x+64);x=0;}
                    }
                    cout<<' ';
                    lh=i+1;
                }
                if(i==str.size()-1)
                {
                    int x=0;
                    string tmp=str.substr(lh,i-lh+1);
                    for(int j=0;j<tmp.size();j++)
                    {
                        if(tmp[j]!='-'){x*=10;x+=tmp[j]-48;}
                        if(tmp[j]=='-'){cout<<(char)(x+64);x=0;}
                        if(j==tmp.size()-1){cout<<(char)(x+64);x=0;}
                    }
                }
            }
        cout<<endl;
    }
    return 0;
}
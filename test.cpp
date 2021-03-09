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
        cin.get();                                              //*
        string struser,stroj,temp;
        struser="";
        stroj="";
        getline(cin,temp);
        while(getline(cin,temp))
        {
            if(temp=="")temp="\n";
            if(temp=="END")break;
            else struser.append(temp);                          //*
        }
        getline(cin,temp);
        while(getline(cin,temp))
        {
            if(temp=="")temp="\n";
            if(temp=="END")break;
            else stroj.append(temp);
        }
        if (stroj==struser){cout<<"Accepted"<<endl;continue;}
            else {
                for(int i=0;i<stroj.size();i++)
                while(stroj[i] == ' ' || stroj[i] == '\t' || stroj[i] == '\n')stroj.erase(stroj.begin()+i);                       //*
                for(int i=0;i<struser.size();i++)
                while(struser[i] == ' ' || struser[i]  == '\t' || struser[i]  == '\n')struser.erase(struser.begin()+i);
                if(stroj==struser){cout<<"Presentation Error"<<endl;continue;}
                    else {cout<<"Wrong Answer"<<endl;continue;}
            }
    }
    return 0;
}

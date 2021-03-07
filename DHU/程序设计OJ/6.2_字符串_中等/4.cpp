#include <bits/stdc++.h>
using namespace std;
int main()
{
    string temp;
    while(cin>>temp)
    {
        int flag=0;
        vector<char>v;
        for(int i=0;i<temp.size();i++){
            if('1'<=temp[i] && temp[i]<='9' && !flag){
                int n=temp[i]-48;
                while(n--)v.push_back(temp[i+1]);
                flag=1;
            }
            else {v.push_back(temp[i]);flag=0;}
        }
        int k=0;
        for(auto it=v.begin();it!=v.end();it++){cout<<*it;k++;if(k%3==0 && it!=v.end()-1)cout<<' ';}
        cout<<endl;
    }

}
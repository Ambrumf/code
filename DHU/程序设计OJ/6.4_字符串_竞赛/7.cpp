#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool fun(string t,int i)
{
    if(t[i-1]>='a' && t[i-1]<='z' &&t[i+1]>='a' && t[i+1]<='z'
    || t[i-1]>='0' && t[i-1]<='9' &&t[i+1]>='0' && t[i+1]<='9')return 1;
    else return 0;
}
int main()
{
    string t;
    int p1,p2,p3;
    cin>>p1>>p2>>p3>>t;
    for(int i=0;i<t.size();i++)
    {
        if(t[i]=='-' && fun(t,i))
        {
            string tmp;
            char l=t[i-1],r=t[i+1];
            if(l==r){continue;}
            else if(r==(l+1)){t.erase(i,1);continue;}
            else if(r<=l)continue;
            else {
                for(int i=l+1;i<r;i++)
                    for(int j=0;j<p2;j++)
                tmp.push_back((char)i);
                if(p1==1)for(auto &x:tmp){
                    if(x>='A' &&x<='Z')x+=32;
                }
                if(p1==2)for(auto &x:tmp){
                    if(x>='a' &&x<='z')x-=32;
                }
                if(p1==3)for(auto &x:tmp){
                    x='*';
                }
                if(p3==2)reverse(tmp.begin(),tmp.end());
            }
            t.erase(i,1);
            t.insert(i,tmp);

        }
    
    }
    cout<<t;
    return 0;
}

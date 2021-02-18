#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string tob(int x){
    stack<string> s;
    string t;
    while(x){
        if(x%2==0)s.push("0");
        else s.push("1");
        x/=2;
    }
    while(!s.empty()){
        t+=s.top();
        s.pop();
    }
    return t;
}
void solve(){
    string t[20];
    for(int i=1;i<=19;i++)t[i]=tob(i);
    int sum=0,cnt=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0')sum++;
        else if(s[i]=='1'){
            for(int j=1;j<=19;j++){
                int prez=j-t[j].size();
                if(sum<prez){sum=0;break;}
                //if(s.size()-i<t[j].size())break;
                if(s.substr(i,t[j].size())==t[j]){cnt++;cout<<i<<' '<<t[j]<<endl;}
            }
            sum=0;
        }
    }
    cout<<cnt<<endl;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}
/*
Input
4
0110
0101
00001000
0001000
Output
4
3
4
3
*/

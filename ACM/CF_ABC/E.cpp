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
    string str;
    cin>>str;
    int cnt=0;
    for(int i=1;i<=19;i++){
        string t=tob(i);
        int len=i-t.size();
        while(t.size()<i){
            t="0"+t;
        }
        int size=t.size();
        //cout<<t<<endl;
        if(size>str.size())break;
        for(int j=0;j<str.size()-size+1;j++)if(str.substr(j,size)==t)cnt++;
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

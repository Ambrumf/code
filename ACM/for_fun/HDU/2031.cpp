#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
#include <stdio.h>
#include <cstring>
#include <stack>
using namespace std;
typedef long long ll;

int main()
{
    int n,k;
    while(cin>>n>>k){
        if(n<0){cout<<'-';n=-n;}
        stack<int> s;
        while(n){
            s.push(n%k);
            n/=k;
        }
        while(!s.empty()){
            char c='A';
            if(s.top()<10)cout<<s.top();
            else cout<<(char)(c+s.top()-10);
            s.pop();
        }
        cout<<endl;
    }
    return 0;
}
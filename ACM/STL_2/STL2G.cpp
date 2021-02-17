#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<char,int> m;
    m.insert(make_pair('a',2));
    m.insert(make_pair('b',2));
    m.insert(make_pair('c',2));
    m.insert(make_pair('d',3));
    m.insert(make_pair('e',3));
    m.insert(make_pair('f',3));
    m.insert(make_pair('g',4));
    m.insert(make_pair('h',4));
    m.insert(make_pair('i',4));
    m.insert(make_pair('j',5));
    m.insert(make_pair('k',5));
    m.insert(make_pair('l',5));
    m.insert(make_pair('m',6));
    m.insert(make_pair('n',6));
    m.insert(make_pair('o',6));
    m.insert(make_pair('p',7));
    m.insert(make_pair('q',7));
    m.insert(make_pair('r',7));
    m.insert(make_pair('s',7));
    m.insert(make_pair('t',8));
    m.insert(make_pair('u',8));
    m.insert(make_pair('v',8));
    m.insert(make_pair('w',9));
    m.insert(make_pair('x',9));
    m.insert(make_pair('y',9));
    m.insert(make_pair('z',9));
    while(n--){
        int N,M;
        cin>>N>>M;
        vector<int>num;
        multiset<int>dic;
        while(N--){
            int t;
            cin>>t;
            num.push_back(t);
        }
        while(M--){
            string t;
            cin>>t;
            int sum=0;
            for(auto x:t){
                char c=x;
                sum*=10;
                sum+= m[x];
                dic.insert(sum);
            }
        }
        for(auto x:num){
            cout<<dic.count(x)<<endl;
        }
    }
    return 0;
}
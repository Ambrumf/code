#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string t="",tmp;
    int w=0,l=0;
    while(cin>>tmp)t+=tmp;
    int i=0;
    while(1){
        if(t[i]=='E'){cout<<w<<':'<<l<<endl;break;}
        if(t[i]=='W'){w++;if(w>=11 && w-l>=2){cout<<w<<':'<<l<<endl;w=l=0;}}
        if(t[i]=='L'){l++;if(l>=11 && l-w>=2){cout<<w<<':'<<l<<endl;w=l=0;}}
        i++;
    }
    cout<<endl;
    w=l=i=0;
    while(1){
        if(t[i]=='E'){cout<<w<<':'<<l<<endl;break;}
        if(t[i]=='W'){w++;if(w>=21 && w-l>=2){cout<<w<<':'<<l<<endl;w=l=0;}}
        if(t[i]=='L'){l++;if(l>=21 && l-w>=2){cout<<w<<':'<<l<<endl;w=l=0;}}
        i++;
    }
    return 0;
}

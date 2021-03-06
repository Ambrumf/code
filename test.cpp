#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;
struct haa{
    char c[500];
    haa(){memset(c,'0',sizeof(c));}
    int n=0;
    bool operator==(haa b){
        if(n==b.n && c==b.c)return 1;
        return 0;
    }
    bool operator>(haa b){
        if(n>b.n)return 1;
        for(int i=n;i>=0;i++){
            if(c[i]>b.c[i])continue;
            return 0;
        }
        return 0;
    }
    haa operator-(haa b){
        for(int i=n-1;i>=0;i--)c[i]=c[i]-b.c[i]+'0';
        for(int i=n-1;i>=0;i--){
            if(c[i]!='0')break;
            n--;
        }
        return *this;
    }
};
int main()
{
    string a,b;
    int T,k=0;
    cin>>T;
    while(T--){
        haa x,y;
        cin>>a>>b;
        cout<<"@@"<<endl;
        x.n=a.size();
        y.n=b.size();
        cout<<"!";
        for(int i=0;i<x.n;i++)x.c[i]=a[x.n-1-i]; 
        for(int i=0;i<y.n;i++)y.c[i]=b[y.n-1-i];
        cout<<"1";
        haa x0=x,y0=y;
        while(!(x==y)){
            if(x>y)x=x-y;
            else y=y-x;
        }
        cout<<"2";
        k++;
        cout<<"Case: "<<k;
        if(x==x0 || x==y0)cout<<"divisible"<<endl;
        else cout<<"not divisible"<<endl;
    }
    return 0;
}

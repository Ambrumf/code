#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int cnt=0;
    string t;
    cin>>t;
    int mpos[200005];
    for(int i=0;i<t.size();i++){
        if(t[i]=='1')mpos[i]=i;
        else mpos[i]=(i==0?-1:mpos[i-1]);
    }   
    //for(int i=0;i<t.size();i++)cout<<mpos[i]<<' ';
    for(int r=0;r<t.size();r++)
    {
        int sum=0;
        for(int l=r;r-l<20 && l>=0;l--){
            if(t[l]=='1'){
                sum+=1<<(r-l);
                if(r-(l==0?-1:mpos[l-1])>=sum)cnt++;
            }
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

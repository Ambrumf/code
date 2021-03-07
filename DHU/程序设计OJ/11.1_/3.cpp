#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n,ans;
    int aa[20][20];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)scanf("%d",&aa[i][j]);
    for(int i=0;i<(1<<n);i++){
        int flag=0;
        for(int j=0;j<n;j++){
            int a=((1<<j)&i)>>j;
            for(int k=0;k<n;k++){
                if(k==j)continue;
                int b=((1<<k)&i)>>k,result;
                if(a==b)result=1;
                else result=0;
                if(result!=aa[j][k]){flag=1;break;}
            }
            if(flag)break;
        }
        if(!flag){ans=i;break;}
    }
    cout<<ans;
    queue<int> q;
    for(int i=0;i<n;i++){
        if(((1<<i)&ans)>>i)q.push(i+1);
    }
    while(!q.empty()){
        cout<<q.front();
        q.pop();
        if(!q.empty())cout<<' ';
    }
    return 0;
}

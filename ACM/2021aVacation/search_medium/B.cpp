#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int t,n=0,tmp,len,total,take[70];
vector<int> aa;
void dfs(int cnt,int sum,int pos){
    if(sum*len==total){printf("%d",len);exit(0);}
    if(cnt==len){dfs(0,sum+1,0);return;}
    if(len-cnt<aa.back())return;
    for(int i=pos;i<n;i++){
        if(!take[i] && aa[i]<=len-cnt){
            take[i]=1;
            dfs(cnt+aa[i],sum,i+1);
            take[i]=0;
            if(cnt==0 || cnt+aa[i]==len) return;
            while(aa[i]==aa[i+1])i++;
        }
    }
}
int main()
{
    scanf("%d",&t);
    while(t--){
        scanf("%d",&tmp);
        if(tmp<=50){n++;aa.push_back(tmp);}
    }
    sort(aa.rbegin(),aa.rend());
    total=accumulate(aa.begin(),aa.end(),0);
    for(len=aa[n-1];len<=total>>1;len++)if(total%len==0)dfs(0,0,0);
    //cout<<"!!";
    printf("%d",total);
    return 0;
}

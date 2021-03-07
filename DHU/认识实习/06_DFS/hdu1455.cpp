#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int t,n,tmp,len,total,take[70],flag;
vector<int> aa;
void dfs(int cnt,int sum,int pos){
    if(sum*len==total){printf("%d\n",len);flag=1;}
    if(flag==1)return;
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
    while(cin>>t){
    if(t==0)break;
    aa.clear();
    n=0;total=0;flag=0;
    memset(take,0,sizeof(take));
    for(int i=0;i<t;i++){
        scanf("%d",&tmp);
        if(tmp<=50){n++;aa.push_back(tmp);}
    }
    sort(aa.rbegin(),aa.rend());
    total=accumulate(aa.begin(),aa.end(),0);
    for(len=aa[n-1];len<=total>>1;len++)if(total%len==0)dfs(0,0,0);
    //cout<<"!!";
    if(!flag)printf("%d\n",total);
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string t;
    char c,cc[20000]={},ans[2000],tmp[20001];
    int k=0,lh,rh,x,y,flag=0,counter;
    while(c=getchar())
    {   
        if(c==EOF)break;
        cc[k]=c;
        k++;
    }
    for(int i=k;i>0;i--)
        if(!flag)for(lh=0;lh<k-i+1;lh++)
            {      
            counter=0;
            for(rh=lh;rh<lh+i;rh++)
            if(cc[rh]>='a' && cc[rh]<='z' || cc[rh]>='A' && cc[rh]<='Z')
            {
                if(counter==0)x=rh;
                else y=rh;
                tmp[counter]=toupper(cc[rh]);
                counter++;
            }
            flag=1;
            for(int s=0;s<counter/2+1;s++)if(tmp[s]!=tmp[counter-1-s]){flag=0;break;}
            if(flag){break;}
            }
    cout<<counter<<endl;
    for(int i=x;i<=y;i++)cout<<cc[i];
    
    return 0;
}
 
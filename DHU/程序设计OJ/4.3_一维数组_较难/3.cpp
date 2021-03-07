#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[318]= {0},b[1000],n=0;
    for(int i=2; i<318; i++)a[i]=i;
    for(int i=2; i<318; i++)
        if(a[i]!=0)for(int j=i+1; j<318; j++)if(a[j]%i==0)a[j]=0;
    for(int i=0; i<318; i++)if(a[i]!=0)
        {
            b[n]=a[i];
            n++;
        }
    int T,x,t,flag,flag2,j;
   cin>>T;
    for(int i=0; i<T; i++)
    {
        flag=0;
        flag2=0;
        cin>>x;
        /*for(int i=0; i<n; i++)
        {
            if((double)x/b[i]==x/b[i])
            {
                flag2=1;
                for(j=0; j<n; j++)
                {
                    if(x==b[j]*b[i])
                    {
                        if(i<n-1)cout<<"Yes"<<endl;
                        else cout<<"Yes";
                        flag=1;
                        break;
                    }
                    if(flag==1)break;
                }
            }

            if(flag2 || flag)break;
        }
        if(!flag && i<n-1)cout<<"No"<<endl;
        if(!flag && i==n-1)cout<<"No";*/
        for(int i=0;i<n;i++)
        {
            if(x%b[i]==0)
            {
                flag=1;
                x/=b[i];
                for(int j=0;j<n;j++)
                {
                    if(x==b[j])break;
                    if(x%b[j]==0 && x!=b[j]){flag=0;break;}
                }
                break;
            }
        }
        if(flag)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}

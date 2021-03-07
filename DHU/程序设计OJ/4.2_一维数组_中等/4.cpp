#include <bits/stdc++.h>

using namespace std;
int a[50],n,sum,t;
int main()
{
    while(scanf("%d",&n) != EOF)
    {
        t=0;
        for(int i=0; i<n; i++)cin>>a[i]; //input data
        for(int i=1; i<n+1; i++) //i represents the lenth
            for(int lh=0; lh<n+1-i; lh++)//lh for start point
            {
                sum=0;
                for(int j=lh; j<lh+i; j++)
                {
                    sum+=a[j];
                }
                if(sum%11==0)t++;
            }
        cout<<t<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
const int MAX = 1000001;
const int fac = 1001;
int a[MAX] = {0};
double b[MAX];
bool isfact(int x)
{
    for(int i=0;i<2000;i++)if(b[i]==x)return 1;
    return 0;
}
int getsum(int  n)
{
    int sum = 0;
    for (int i = 0;i<MAX;i++)
    {
        if(b[i]>=n-b[i])break;
        if(isfact(n-b[i]))sum++;
    }
    return sum;
}
int main()
{
    for (int i = 2; i < MAX; i++)
        a[i] = i;
    for (int i = 2; i <= fac; i++)
        if (a[i] != 0)
            for (int j = i + i; j < MAX; j+=i)a[j]=0;
    int j=0;
    for(int i=0;i<MAX;i++)if(a[i]!=0){b[j]=a[i];j++;}
    int T;
    scanf("%d",&T);
    while (T--)
    {
        int n;
        scanf("%d",&n);
        cout<<getsum(n)<<endl;
    }
    return 0;
}

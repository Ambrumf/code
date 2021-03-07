#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=0/*line*/,k,Max=0/*max rol*/,t=0;
    char a[101][101]= {0},s[101],b[101][101]= {0},c;
    while(cin.getline(s,101))
    {
        strcpy(a[n],s);
        n++;
    }
    for(int i=0; i<n; i++)
    {
        k=strlen(a[i]);
        if(k>Max)Max=k;
        for(int j=0; j<k; j++)b[j][n-1-i]=a[i][j];
    }
    for(int i=0; i<Max; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(b[i][j]==0)cout<<' ';
            else cout<<b[i][j];
        }
        cout<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll v[101],w[1001],maxvalue[101][1001];
    ll W,T;
    cin>>W>>T;
    for(int i=1; i<T+1; i++)
    {
        cin>>w[i]>>v[i];
    }
    for(int i=1; i<T+1; i++)
        for(int j=0; j<W+1; j++)
        {
            if(i>1)
            {
                maxvalue[i][j]=maxvalue[i-1][j];
                if(j>=w[i])maxvalue[i][j]=max(maxvalue[i][j],maxvalue[i-1][j-w[i]]+v[i]);
            }
            else if(j>=w[1])maxvalue[1][j]=v[1];
        }
    cout<<maxvalue[T][W];
    return 0;
}
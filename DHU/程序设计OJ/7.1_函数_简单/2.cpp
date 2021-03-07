#include <bits/stdc++.h>
using namespace std;
int t=0;
void getfac(int n)
{
    if (n==1)return;
    for (int i=2;i<n;i++)if(n%i==0)return;
    t++;
    cout<<n<<' ';
    if (t%10==0)cout<<endl;
}

int main ()
{
    int m,n;
    cin>>m>>n;
    for (int i=m;i<n+1;i++)
    {
        getfac(i);
    }
    return 0;

}

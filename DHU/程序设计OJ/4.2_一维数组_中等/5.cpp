#include <bits/stdc++.h>

using namespace std;
int a,b,c,d,e,f,n;
int main()
{
    while(scanf("%d",&a) != EOF)
    {
        cin>>b>>c>>d>>e>>f;
        n=1;
        while(!(n%d==0 && n%e==0 && n%f==0 && n/d%24==a && n/e%24==b && n/f%24 ==c))
        {
            n++;
        }
        cout<<n<<endl;
    }
    return 0;
}

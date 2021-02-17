#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int tmp=n%2020;
        int qua=n/2020;
        if(tmp<=qua)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

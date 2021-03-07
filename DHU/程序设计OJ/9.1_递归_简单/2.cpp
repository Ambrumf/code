#include <bits/stdc++.h>
using namespace std;
void reverse(int a)
{
    if(a<10){printf("%d",a);return;}
    else {printf("%d",a%10);reverse(a/10);}
}

int main()
{
    int n;
    cin>>n;
    reverse(n);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int n;
int ans[10], take[10] = {0};
void fun(int a[], int k)
{
    if (n == 0)
        return;
    if (k == 10)
    {
        n--;
        return;
    }
    for (int i = 0; i < 10; i++)
    {
        if (take[i] != 1)
        {
            ans[k] = a[i];
            take[i]=1;
            fun(a, k + 1);
            if(n==0)break;
            else take[i]=0;
        }
    }
}
int main()
{
    cin >> n;
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    fun(a, 0);
    for(auto x:ans)cout<<x;
    return 0;
}
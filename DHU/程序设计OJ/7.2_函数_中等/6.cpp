#include <bits/stdc++.h>
using namespace std;
const int MAX = 1000001;
const int fac = 1001;
int a[MAX] = {0};
int getsum(int M, int N)
{
    int sum = 0;
    for (int i = M; i < N; i++)
        if (a[i]!=0)
            sum++;
    return sum;
}
int main()
{
    for (int i = 2; i < MAX; i++)
        a[i] = i;
    for (int i = 2; i <= fac; i++)
        if (a[i] != 0)
            for (int j = i + i; j < MAX; j+=i)a[j]=0;

    int M, N;
    while (cin >> M)
    {
        cin >> N;
        cout << getsum(M, N) << endl;
    }
    return 0;
}

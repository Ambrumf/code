#include <bits/stdc++.h>
using namespace std;

int main()
{
    int list[101][101];
    int cir, line, k, row = 51, col = 50;
    k = 2;
    line = 2;
    ;
    cir = 1;
    list[50][50] = 1;
    while (cir <= 50)
    {
        int time = 4;
        int spin = 0;
        while (time--)
        { //赋值一圈
            if (spin % 4 == 0)
                for (int i = 0; i < line; i++) //每行赋值(右)
                {
                    if (i != line - 1)
                    {
                        list[row][col] = k;
                        col++;
                    }
                    else
                    {
                        list[row][col] = k;
                        row--;
                    }
                    k++;
                }
            if (spin % 4 == 1)
                for (int i = 0; i < line; i++) //每列赋值（上）
                {
                    if (i != line - 1)
                    {
                        list[row][col] = k;
                        row--;
                    }
                    else
                    {
                        list[row][col] = k;
                        col--;
                    }
                    k++;
                }
            if (spin % 4 == 2)
                for (int i = 0; i < line; i++) //每行赋值（左）
                {
                    if (i != line - 1)
                    {
                        list[row][col] = k;
                        col--;
                    }
                    else
                    {
                        list[row][col] = k;
                        row++;
                    }
                    k++;
                }
            if (spin % 4 == 3)
                for (int i = 0; i < line; i++) //每列赋值（下）
                {
                    list[row][col] = k;
                    row++;
                    k++;
                }
            spin++;
        }
        cir++;
        line += 2;
    }
    int n,flag=0;
    while (cin >> n)
    {
        int trigger;
        if(n==10)trigger=1;
        if(n==11)trigger=2;
        if(flag)cout<<endl;
        if(n==1){cout<<1<<endl;continue;}
        int len = 1;
        int t = n;
        while (t /= 10)
        {
            len++;
        }
        int p = 0;
        while (!((2 * p - 1) * (2 * p - 1) >= n && (2 * p - 3) * (2 * p - 3) < n))
            p++;
        if (n < (2 * p - 1) * (2 * p - 1) - 6*p + 7)
        {
            for (int i = 52-p ; i <= 49 + p; i++)
            {
                for (int j = 52 - p; j <= 48 + p; j++)
                {
                    if(n==10)if(j==50|| j ==51)len=1;
                    if(n==11)if(j==51 )len=1;
                    if (list[i][j] < n)
                        cout <<setw(len)<< list[i][j] ;
                    if (list[i][j] == n)
                        cout<<setw(len)<< list[i][j];
                    if((j<48+p && i!=49+p) || (i==49+p && list[i][j]<n))cout<<' ';
                    if(n<=9)len=1;
                    else len=2;
                }
                cout << endl;
            }
        }
        else if (n < (2 * p - 1) * (2 * p - 1) - 4*p + 4)
        {
            for (int i = 52-p ; i <= 49 + p; i++)
            {
                for (int j = 52 - p; j <= 49 + p; j++)
                {
                    if (list[i][j] <= n)
                        cout<<setw(len) << list[i][j] ;
                    if((j<49+p && i!=52-p) || (i==52-p && j<48+p))cout<<' ';
                }
                cout << endl;
            }
        }
        else if (n < (2 * p - 1) * (2 * p - 1) - 2*p + 2)
        {
            for (int i = 51 - p; i <= 49 + p; i++)
            {
                for (int j = 52 - p; j <= 49 + p; j++)
                {
                    if (list[i][j] <= n)
                        cout <<setw(len)<< list[i][j] ;
                        else cout<<setw(len)<<' ';
                    if(j<49+p )cout<<' ';
                }
                cout << endl;
            }
        }
        else
        {
            for (int i = 51 - p; i <= 49 + p; i++)
            {
                for (int j = 51 - p; j <= 49 + p; j++)
                {
                    if (list[i][j] <= n)
                        cout <<setw(len)<< list[i][j] ;
                    else cout << setw(len) <<' ';
                    if(j<49+p)cout<<' ';
                }
                cout << endl;
            }
        }
        flag=1;
    }
    return 0;
}
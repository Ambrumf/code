#include <bits/stdc++.h>
using namespace std;
char srcc[11][11]={0},tarc[11][11]={0};
bool comparec(char c1[][11],char c2[][11],int n);
bool reverse1(char c[][11],int n);
bool reverse2(char c[][11],int n);
bool reverse3(char c[][11],int n);
bool reverse4(char c[][11],int n);
bool reverse5(char c[][11],int n);

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>srcc[i];
    for(int i=0;i<n;i++)cin>>tarc[i];
    if(reverse1(srcc,n))cout<<1;
        else if(reverse2(srcc,n))cout<<2;
            else if(reverse3(srcc,n))cout<<3;
                else if(reverse4(srcc,n))cout<<4;
                    else if(reverse5(srcc,n))cout<<5;
                        else if(comparec(srcc,tarc,n))cout<<6;
                            else cout<<7;
    return 0;
}
bool comparec(char c1[][11],char c2[][11],int n)
{
    int flag=1;
    for(int i=0;i<n;i++)
        if(strcmp(c1[i],c2[i]))flag=0;
    if(flag)return 1;
    return 0;

}
bool reverse3(char c[][11],int n)
{
    char rc[11][11]={0};
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)rc[n-1-j][i]=c[i][j];
    return comparec(rc,tarc,n);
}
bool reverse2(char c[][11],int n)
{
    char rc[11][11]={0};
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)rc[n-1-i][n-1-j]=c[i][j];
    return comparec(rc,tarc,n);
}
bool reverse1(char c[][11],int n)
{
    char rc[11][11]={0};
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)rc[j][n-1-i]=c[i][j];
    return comparec(rc,tarc,n);
}
bool reverse4(char c[][11],int n)
{
    char rc[11][11]={0};
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)rc[i][n-1-j]=c[i][j];
    return comparec(rc,tarc,n);
}
bool reverse5(char c[][11],int n)
{
    char rc[11][11]={0};
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)rc[i][n-1-j]=c[i][j];
    if(reverse1(rc,n) || reverse2(rc,n) || reverse3(rc,n) )return 1;
    return 0;
}


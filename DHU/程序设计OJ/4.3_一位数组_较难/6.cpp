#include <bits/stdc++.h>
# include <stdio.h>

using namespace std;
void convertrev(char c[])
{
    int n=strlen(c);
    char *i1=c+n-1;
    while(n--)cout<<*i1--;
}
void covch(int x,int B,char c[])//store reverced char in c[]
{
    int temp,j=0;
    do
    {
        if(x%B<10)c[j]=x%B+48;
        else c[j]=x%B+55;
        x/=B;
        j++;
    }
    while(x);
    c[j]=0;
}

bool rev(char c[])// judge reverse
{
    int n=strlen(c);

    char b[100];
    for (int i=0;i<n;i++)b[i]=c[n-1-i];
    b[n]=0;
    if (strcmp(c,b)==0) return true;
    else return false;
}

int main()
{
    int B;
    char c[100],c2[100];
    cin>>B;
    for (int i=1; i<301; i++)
    {
        covch(i*i,B,c);// convert num to char
        if (rev(c)==1)
        {
            covch(i,B,c2);
            convertrev(c2);
            cout<<' ';
            convertrev(c);
            cout<<endl;
        }
    }
    return 0;

}

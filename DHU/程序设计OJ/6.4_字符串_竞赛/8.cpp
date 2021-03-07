#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    string a;
    char rea1[2010],rea2[2010],vir1[2010],vir2[2010],ansr[2010],ansv[2010];
    bool up=0;
    int nr1,nr2,nv1,nv2,nra,nva;
    
    for(int i=0;i<2001;i++){rea1[i]=rea2[i]=vir1[i]=vir2[i]=ansr[i]='0';}
    cin>>a;
    int flag=0,pos;
    for(int i=0;i<a.size();i++)if(a[i]=='.'){flag=1;pos=i;}
    if(flag==0){
        for(int i=0;i<a.size();i++)rea1[i]=a[i];
        nr1=a.size();
        nv1=0;
    }
    else
    {
         for(int i=0;i<pos;i++)rea1[i]=a[i];
         for(int i=pos+1;i<a.size();i++)vir1[i-pos-1]=a[i];
        nr1=pos;
        nv1=a.size()-nr1-1;
    }
    //cout<<rea1;
    //cout<<' ';
    //cout<<vir1;
    cin>>a;
    flag=0,pos;
    for(int i=0;i<a.size();i++)if(a[i]=='.'){flag=1;pos=i;}
    if(flag==0){
        for(int i=0;i<a.size();i++)rea2[i]=a[i];
        nr2=a.size();
        nv2=0;
    }
    else
    {
         for(int i=0;i<pos;i++)rea2[i]=a[i];
         for(int i=pos+1;i<a.size();i++)vir2[i-pos-1]=a[i];
        nr2=pos;
        nv2=a.size()-nr2-1;
    }
    //cout<<rea2<<' '<<vir2;
    nva=max(nv1,nv2);
    nra=max(nr1,nr2);
    for(int i=0;i<nva;i++)ansv[i]=vir1[i]+vir2[i]-'0';
    //cout<<ansv<<endl;
    //cout<<nva<<' '<<nra;
    for(int j=nva-1;j>0;j--)
    {
		if(ansv[j]>'9')
        {ansv[j]-=10;
        ansv[j-1]+=1;}
    }
    if(ansv[0]>'9'){ansv[0]-=10;up=1;}

    //cout<<ansv<<endl;
    deque<char> r1,r2;
    for(int i=0;i<nr1;i++)r1.push_back(rea1[i]); 
    for(int i=0;i<nr2;i++)r2.push_back(rea2[i]);
    if(up)r1.back()+=1; 
    for(int i=nra;i>0;i--)
    {
        if(!r1.empty()){ansr[i]+=r1.back()-'0';r1.pop_back();}
        if(!r2.empty()){ansr[i]+=r2.back()-'0';r2.pop_back();}
    }
    for(int j=nra;j>0;j--)
    {
		if(ansr[j]>'9')
        {ansr[j]-=10;
        ansr[j-1]+=1;}
    }
    if(ansr[0]=='1'){
        for(int i=0;i<nra+1;i++)cout<<ansr[i];
    }
    else for(int i=1;i<nra+1;i++)cout<<ansr[i];
    for(int i=nva-1;i>=0;i--)
    {
        if(ansv[i]!='0')break;
        nva--;
    }
    if(nva){
        cout<<'.';
        for(int i=0;i<nva;i++)cout<<ansv[i];
    }
    cout<<endl;
}
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{

      double a[200];
      double n,k,m;
      while(cin>>k)
      {
          if(k==2){cout<<"2"<<endl;continue;}
          n=0;
          while(!(n*(n+1)/2<=k && (n+1)*(n+2)/2>k))n++;
          for(int i=0;i<n;i++)a[i]=i+1;
          m=k-n*(n+1)/2;
          for(int i=n-1;i>n-1-m;i--)a[i]++;
          for(int i=0;i<n;i++){if(i==0)cout<<a[i];else cout<<','<<a[i];}
          cout<<endl;
      }
        return 0;
}

#include<bits/stdc++.h>
#define ll unsigned long long
#define R register int
#define inf 0x3f3f3f3f
#define mod 1000000007;
using namespace std;
inline ll read(){
   ll s=0,w=1;
   char ch=getchar();
   while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
   while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
   return s*w;
}
void put1(){ puts("YES") ;}
void put2(){ puts("NO") ;}
void put3(){ puts("-1"); }

const int manx=2e5+5;


int main()
{
    ll p=read();
    while(p--)
    {
        string s;
        cin>>s;
        ll ans=0;
        ll n=s.size();
        for(int i=0;i<n;i++)
        {
            ll x=s[i]-'0';  
            if(x==1) ans++;  //如果当前为1，即本身也符合要求
            ll pos=i;  // 1后面的第一个位置
            while(pos<n-1&&x<=pos-i+1) 
      //pos<n-1是防止字符串越界  当x大于pos-i+1的时候所以就算计算后面的位置也无法满足条件
            {
                pos++;  //指针后移
                x=(x<<1)+s[pos]-'0'; //指针后移 更新x的值  二进制 所以*2
                if(x>=1&&x<=pos-i+1) ans++;  //如果x>=1才有可能符合条件
            }
            while(i<n&&s[i]=='0') i++; //直接找到下一个1的位置
        }
        cout<<ans<<endl;
    }
    return 0;
}
/*9
01011000110010101001
0101000110001100010
010001110001010001
1010101000110011
1010000001100110
0000000000001
00001100011000
0001
01001100010010*/


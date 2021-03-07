// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define inf 0x3f3f3f3f;
// class haa
// {
// public:
//     char c[500];
//     haa() { memset(c, '0', sizeof(c)); }
//     int n = 0;
//     bool operator==(haa b)
//     {
//         if (n != b.n)
//             return 0;
//         for (int i = n - 1; i >= 0; i--)
//         {
//             if (c[i] != b.c[i])
//                 return 0;
//         }
//         return 1;
//     }
//     bool operator>(haa b)
//     {
//         if (n > b.n)
//             return 1;
//         for (int i = n - 1; i >= 0; i--)
//         {
//             if (c[i] > b.c[i])
//                 return 1;
//             if(c[i]<b.c[i])
//                 return 0;
//         }
//         return 0;
//     }
//     haa operator-(haa b)
//     {
//         for (int i = n - 1; i >= 0; i--)
//             c[i] = c[i] - b.c[i] + '0';
//         for (int i = 0;i<=n-1;i++){
//             if(c[i]<'0'){c[i]+=10;c[i+1]--;}
//         }
//         for (int i = n - 1; i >= 0; i--)
//         {
//             if (c[i] > '0')
//                 break;
//             n--;
//         }
//         return *this;
//     }
//     haa operator*(haa b){
//         haa x;
//         x.n=n+b.n;
//         int k;
//         for(int i=0;i<n;i++){
//             k=0;
//             for(int j=0;j<b.n;j++){
//                 x.c[i+j]+=(c[i]-'0')*(b.c[j]-'0')+k;
//                 k=(x.c[i+j]-'0')/10;
//                 x.c[i+j]=(x.c[i+j]-'0')%10+'0';
//             }
//             x.c[i+b.n]+=k;
//         }
//         if(x.c[x.n-1]=='0')x.n--;
//         //for(int i=x.n-1;i>=0;i--){if(x.c[i]=='0')x.n--;else break;}
//         //for(int i=x.n-1;i>=0;i--)cout<<x.c[i];
//         //cout<<endl;
//         return x;
//     }
//     haa half()
//     {
//         int up[500] = {};
//         for (int i = n - 1; i >= 0; i--)
//         {
//             if ((c[i] - '0') & 1)
//                 up[i] = 1;
//             c[i] = (c[i] - '0' + up[i + 1] * 10) / 2 + '0';
//         }
//         if (c[n - 1] == '0')
//             n--;
//         //for(int i=0;i<n;i++)cout<<"i:"<<i<<' '<<up[i]<<' ';
//         //cout<<endl;
//         return *this;
//     }
//     void display()
//     {
//         for (int i = n - 1; i >= 0; i--)
//             cout << c[i];
//         cout << endl;
//     }
// };
// haa haafp(haa a,int p){
//     //cout<<"!!";
//     haa one;
//     one.n=1;
//     one.c[0]='1';
//     haa ans=one;
//     while(p){
//         if(p&1)ans=ans*a;
//         p/=2;
//         a=a*a;
//     }
//     return ans;
// }
// int main()
// {
//     freopen("in.in", "r", stdin);
//     freopen("ou.out", "w", stdout);
//     string a, b;
//     haa zero;
//     zero.n = 1;
//     haa two,eight,m;
//     two.n=1;eight.n=1;
//     two.c[0]='2';eight.c[0]='8';
//     haa test=two*eight;
//      //test=test*test;
//      //test.display();
//      m=haafp(eight,7);
//      m.display();
//      (m*m).display();
//      m=haafp(eight,8);
//     m=m*m;
//     m.display();
//     return 0;
//     int T, k = 0;
//     cin >> T;
//     while (T--)
//     {
//         int pow=0;
//         haa x, y;
//         cin >> a >> b;
//         if (a == "0")
//             x = zero;
//         if (a[0] == '-')
//             a.erase(a.begin());
//         if (b[0] == '-')
//             b.erase(b.begin());
//         else
//         {
//             x.n = a.length();
//             for (int i = 0; i < x.n; i++)
//                 x.c[i] = a[x.n - 1 - i];
//         }
//         if (b == "0")
//             y = zero;
//         else
//         {
//             y.n = b.length();
//             for (int i = 0; i < y.n; i++)
//                 y.c[i] = b[y.n - 1 - i];
//         }
//         //cout << "Ix:";
//         //x.display();
//         //cout << "Iy:";
//         //y.display();
//         haa x0 = x, y0 = y;
//         while (!(x == zero || y == zero))
//         {
//             if (x == y)
//                 x = x - y;
//             else
//             {
//                 if((x.c[0] - '0') % 2 == 0 && (y.c[0] - '0') % 2 == 0){
//                     pow++;
//                     x.half();
//                     y.half();
//                 }
//                 else if ((x.c[0] - '0') % 2 == 0 || (y.c[0] - '0') % 2 == 0)
//                 {
//                     if ((x.c[0] - '0') % 2 == 0)
//                         x.half();
//                     if ((y.c[0] - '0') % 2 == 0)
//                         y.half();
//                 }
//                 else if(!(x.c[0] - '0') % 2 == 0 || (y.c[0] - '0') % 2 == 0){
//                     if (x > y) x = x - y;
//                     else y = y - x;
//                 }
//             }
//             // cout<<"x:";
//             // x.display();
//             // cout<<"y:";
//             // y.display();
//         }
//         k++;
//         cout << "x:";
//         x.display();
//         cout << "y:";
//         y.display();
//         if (x == zero)
//             x = y;
//         cout << "Case:" << k << ' ';
//         if (x == x0 || x == y0)
//             cout << "divisible" << endl;
//         else
//             cout << "not divisible" << endl;
//     }
//     return 0;
// }

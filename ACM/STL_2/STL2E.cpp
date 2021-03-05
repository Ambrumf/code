// #include <iostream>
// #include <string>
// #include <vector>
// #include <queue>
// #include <algorithm>
// #include <set>
// #include <map>
// #include <stdio.h>
// #include <cstring>
// using namespace std;
// typedef long long ll;

// int main()
// {
//     int n,k=0;
//     int first=1;
//     while(cin>>n){
//         if(n==0)break;
//         if(!first)printf("\n");
//         first=0;
//         vector<int> v(n,3);
//         string t;
//         int flag=0;
//         cin>>t;
//         int dice,pos=0,now=0,pile=0,cnt=0;
//         while(pos<t.size()){
//             dice=min(3,v[now]);
//             if(t.size()-pos<dice){flag=-1;break;}
//             if(flag==-1)break;
//             for(int i=pos;i<pos+dice;i++){
//                 if(t[i]=='C'){
//                     v[now]--;
//                     pile++;
//                     if(v[now]==0)cnt++;
//                 }
//                 else if(t[i]=='L'){
//                     v[now]--;
//                     v[(now+1)%n]++;
//                     if(v[now]==0)cnt++;
//                     if(v[(now+1)%n]==1)cnt--;
//                     if(cnt==n-1)now=(now+1)%n;
//                 }
//                 else if(t[i]=='R'){
//                     v[now]--;
//                     v[(now+n-1)%n]++;
//                     if(v[now]==0)cnt++;
//                     if(v[(now+n-1)%n]==1)cnt--;
//                 }
//                 if(cnt==n-1){flag=1;break;}
//             }
//             if(flag==1)break;
//             pos+=dice;
//             now++;
//             if(now==n)now=0;
//             while(v[now]==0){
//                 now++;
//                 if(now==n)now=0;
//             }
//         }
//         k++;
//         cout<<"Game "<<k<<":\n";
//         if(flag==1){
//             for(int i=0;i<n;i++)if(v[i])now=i;
//             for(int i=0;i<n;i++){cout<<"Player "<<i+1<<":"<<v[i];
//             if(i==now)cout<<"(W)";
//             cout<<endl;
//             }
//         }
//         else {
//             for(int i=0;i<n;i++){cout<<"Player "<<i+1<<":"<<v[i];
//             if(i==now)cout<<"(*)";
//             cout<<endl;
//             }
//         }
//         cout<<"Center:"<<pile<<endl;
//     }
//     return 0;
// }

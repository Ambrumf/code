#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f;
int main()
{
    int n;
    //a1=45; 1~9
    //a2=a1+(11+189)*90/2;//9045 10~99
    //a3=a2+(192+2892)*900/2;//1396845 100~999
    //a4=a3+(2896+38896)*9000/2;//189460845 1000~9999
    while(cin>>n){
        int i,a,sum=0;
        if(n<=45){
            i=0;
            a=1;
            while(sum<n){
                sum+=a;
                i++;
                a+=1;
            }
            i--;
            int j=0;
            
        }
        else if(n<=9045){

        }
        else if(n<=1396845){

        }
        else if(n<=189460845){

        }
    }
    return 0;
}

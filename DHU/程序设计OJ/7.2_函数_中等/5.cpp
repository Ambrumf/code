#include <bits/stdc++.h>
using namespace std;
double total(int n){
    double sum;
    for(double i=1;i<=n;i++){
        sum+=1/i;
    }
    return sum;
}
int main(){

 int n;

 cin>>n;

 cout<<fixed<<setprecision(3)<<total(n)<<endl;

 return 0;

}


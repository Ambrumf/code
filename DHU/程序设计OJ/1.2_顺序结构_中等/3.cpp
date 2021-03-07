#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int AH,AM,AS,BH,BM,BS,x;
    int H,M,S;
    cin>>AH>>AM>>AS>>BH>>BM>>BS;
    x=3600*(AH+BH)+60*(AM+BM)+AS+BS;
    H=x/3600;
    M=(x-3600*H)/60;
    S=x-3600*H-60*M;
    cout<<H<<' '<<M<<' '<<S;
    return 0;
}

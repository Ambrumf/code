#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int flag=1,winflagx=0,winflago=0;
    int X=0,O=0;
    vector<string> board;
    string aRow;
    for(int i=0; i<3; i++)
    {
        getline(cin,aRow);
        board.push_back(aRow);

    }
    for(int i=0;i<3;i++)if(board[i]=="XXX"||board[i]=="OOO")flag=0;
    for(int i=0;i<3;i++){
        if(board[0][i]=='X' && board[1][i]=='X' && board[2][i]=='X'){flag=0;winflagx=1;}
        if(board[0][i]=='O' && board[1][i]=='O' && board[2][i]=='O'){flag=0;winflago=1;}
    }
    if(board[0][0]=='X' && board[1][1]=='X' && board[2][2]=='X'){flag=0;winflagx=1;}
    if(board[0][0]=='O' && board[1][1]=='O' && board[2][2]=='O'){flag=0;winflago=1;}
    if(board[2][0]=='X' && board[1][1]=='X' && board[0][2]=='X'){flag=0;winflagx=1;}
    if(board[2][0]=='O' && board[1][1]=='O' && board[0][2]=='O'){flag=0;winflago=1;}
    for(auto x:board)
        for(auto y:x){if(y=='X')X++;if(y=='O')O++;}
    if(winflago==1 && winflagx==1)cout<<"false"<<endl;
    if(winflago==0 && winflagx==1)
        if(X-O==1)cout<<"true"<<endl;
        else cout<<"false"<<endl;
    if(winflago==1 && winflagx==0)
        if(O==X)cout<<"true"<<endl;
        else cout<<"false"<<endl;
    if(winflago==0 && winflagx==0)
        if(X-O>1 || O-X>0)cout<<"false"<<endl;
        else cout<<"true"<<endl;
    return 0;
}


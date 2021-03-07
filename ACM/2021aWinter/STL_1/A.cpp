#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int m, n, t = 0;
    while((scanf("%d",&n)!=EOF))
    {
        cin>>m;
        m--;
        t = 0;
        vector<int> vec;
        for(int i=1;i<2*n+1;i++)vec.push_back(i);
        for(int i=0;i<n;i++)
        {
            t=(t+m)%(int)vec.size();
            vec.erase(vec.begin() + t);
        }

        int j = 0;
        for (int k = 1; k < 2*n + 1; k++)
        {
            if (k == *vec.begin())
            {
                cout << "G";
                vec.erase(vec.begin());
            }
            else cout << "B";
            if(k%50==0 && k!=2*n-1)cout<<endl;
        }
       cout << endl<< endl;
    }
    return 0;

}
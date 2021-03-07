#include<iostream>
#include<string>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.get();
    while(n--)
    {
        multiset<char> mset;
        vector<char> vec;
        char c;
        while((c=cin.get())!='\n')vec.push_back(c);
        for(int i=0;i!=vec.size();i++)
        {
            int sum=1;
            while(i != vec.size()-1 && vec[i]==vec[i+1] )
            {
                vec.erase(vec.begin()+i+1);
                sum++;
            }
            if(sum==1)cout<<vec[i];
            else cout<<sum<<vec[i];
        }
		cout<<endl;
    }
    return 0;

}
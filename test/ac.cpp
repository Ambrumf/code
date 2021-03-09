#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <set>
using namespace std;

int main()
{
    freopen("data.in","r",stdin);
    freopen("ac.out","w",stdout);
    string temp;
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        vector<string> vec,output;
        set<string> spy,dual_spy;
        while(a--){
            cin>>temp;
            vec.push_back(temp);
        }
        while(b--){
            cin>>temp;
            spy.insert(temp);
        }
        while(c--){
            cin>>temp;
            dual_spy.insert(temp);
        }
        for(auto it:vec)
        {
            if(!(spy.count(it)==0 || (spy.count(it)==1 && dual_spy.count(it)==1)))output.push_back(it);
        }
        if(output.empty()){cout<<"No enemy spy"<<endl;continue;}
        for(int i=0;i<output.size();i++)
            if(i>0)cout<<' '<<output[i];
            else cout<<output[i];
        cout<<endl;
    }
    return 0;

}
#include<bits/stdc++.h>
using namespace std;
    struct stu {
        string name;
        int math;
        int pol;
        int ave;};
bool cmp (stu a,stu b)
{
    return a.math > b.math;
}
int main()
{
    vector<stu> v;
    for(int i=0;i<5;i++){
        stu temp;
        cin>>temp.name>>temp.math>>temp.pol;
        temp.ave=(temp.math+temp.pol)/2;
        v.push_back(temp);
    }
    for(auto it=v.begin();it!=v.end();it++)cout<<it->name<<' '<<it->ave<<endl;
    sort(v.begin(),v.end(),cmp);
    cout<<v.begin()->name<<' '<<v.begin()->math<<' '<<v.begin()->pol;
    return 0;

}
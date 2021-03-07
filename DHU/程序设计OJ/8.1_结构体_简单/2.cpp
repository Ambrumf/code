#include <bits/stdc++.h>
using namespace std;
int main()
{
    struct stu{
        int num;
        string name;
        int year;
        int mon;
        int math;
        int eng;
        int c;
        double ave;
    };
    int n;
    vector<stu> v;
    cin>>n;
    while(n--){
        stu temp;
        cin>>(temp.num)>>(temp.name)>>(temp.year)>>(temp.mon)>>(temp.math)>>(temp.eng)>>(temp.c);
        temp.ave=((double)temp.math+temp.eng+temp.c)/3;
        v.push_back(temp);
    }
    for(auto x:v)
    cout<<x.num<<' '<<(x.name)<<' '<<x.year<<'/'<<x.mon<<' '<<x.math<<' '<<x.eng<<' '<<x.c<<' '<<(int)(x.ave+0.5)<<endl;
    return 0;
}
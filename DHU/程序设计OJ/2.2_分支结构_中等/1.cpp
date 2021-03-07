#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int t,day,h,m,s;
    cin >> t;
    day = t / 86400;
    h = (t - day * 86400) / 3600;
    m = (t - day * 86400 - h * 3600) / 60;
    s = t - day * 86400 - h * 3600 - 60 * m;
    if (day>=2) cout << setw(2) <<setfill('0')<< day << " days " << setw(2)<< h << ':' << setw(2)<< m << ':' << setw(2)<< s;
        else if (day>=1) cout << day << " day " << setw(2) <<setfill('0')<< setw(2)<< h << ':' << setw(2)<< m << ':' << setw(2)<< s;
             else if(h>=1) cout << setw(2) <<setfill('0')<< setw(2)<< h << ':' << setw(2)<< m << ':' << setw(2)<< s;
                  else if (m>=1) cout << setw(2) <<setfill('0') << setw(2)<< m << ':' << setw(2)<< s;
                       else if (s>=10) cout << setw(2) <<setfill('0') << s;
                            else cout << s;
    return 0;
}

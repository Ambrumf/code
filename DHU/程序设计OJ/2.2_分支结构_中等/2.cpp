#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int year,mt,date,lenth;
    cin >> year >> mt >> date >> lenth;
    mt += lenth;
    if (mt>=13) {year += mt / 12; mt = mt % 12;}
    if (mt == 0) {mt = 12 ; year -= 1;}
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) month[2]=29;
    if (date>month[mt]) date = month[mt];
    cout << year << ' ' << mt << ' ' << date ;
    return 0;
}

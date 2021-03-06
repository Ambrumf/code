#include <bits/stdc++.h>
using namespace std;
bool isleapyear(int year)
{
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        return 1;
    else
        return 0;
}
void getdate(int year, int month, int day, int n)
{
    int mon[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isleapyear(year))
        mon[2] = 29;
    else
        mon[2] = 28;
    int tempday = day;
    for (int i = month - 1; i > 0; i--)
        tempday += mon[i];
    tempday += n;
    while ((isleapyear(year) && tempday > 366) || (!isleapyear(year) && tempday > 365))
    {
        if (isleapyear (year))
            tempday -= 366;
        else
            tempday -= 365;
        year++;
    }
    if (isleapyear(year))
        mon[2] = 29;
    else
        mon[2] = 28;
    month = 1;
    while (tempday > mon[month])
    {
        tempday -= mon[month];
        month++;
    }
    cout << year << ' ' << month << ' ' << tempday;
}
int main()
{
    int year, month, day, n;
    cin >> year >> month >> day >> n;
    getdate(year, month, day, n);
    return 0;
}
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
using namespace std;
int getloc(int a, int n, int &d)
{
    while (!(a > 0 && a <= n))
    {
        if (a <= 0)
        {
            a = -a + 2;
            d += 2;
        }
        if (a > n)
        {
            a = 2 * n - a;
            d -= 2;
        }
    }
    return a;
}
int main()
{
    int N, n, spT, spJ, tmT, tmJ;
    char tT, tJ;
    while (cin >> n)
    {
        int dT, dJ;
        int time = 0;
        if (n == 0)
            break;
        cin >> tT >> spT >> tmT >> tJ >> spJ >> tmJ >> N;
        switch (tT)
        {
        case 'N':
            dT = 0;
            break;
        case 'W':
            dT = 1;
            break;
        case 'S':
            dT = 2;
            break;
        case 'E':
            dT = 3;
            break;
        }
        switch (tJ)
        {
        case 'N':
            dJ = 0;
            break;
        case 'W':
            dJ = 1;
            break;
        case 'S':
            dJ = 2;
            break;
        case 'E':
            dJ = 3;
            break;
        }
        int clock = 0;
        int xT = 1, yT = 1, xJ = n, yJ = n,flagT=0,flagJ=0;
        while (N--)
        {

            if (dT == 0)
            {
                yT -= spT;
                if (yT <= 0)
                    yT = getloc(yT, n, dT);
                flagT=1;
            }
            if (dT == 1 && !flagT)
            {
                xT -= spT;
                if (xT <= 0)
                    xT = getloc(xT, n, dT);
                flagT=1;
            }
            if (dT == 2 && !flagT)
            {
                yT += spT;
                if (yT > n)
                    yT = getloc(yT, n, dT);
                flagT=1;
            }
            if (dT == 3 && !flagT)
            {
                xT += spT;
                if (xT > n)
                    xT = getloc(xT, n, dT);
                flagT=1;
            }

            if (dJ == 0)
            {
                yJ -= spJ;
                if (yJ <= 0)
                    yJ = getloc(yJ, n, dJ);
                flagJ=1;
            }
            if (dJ == 1 && !flagJ)
            {
                xJ -= spJ;
                if (xJ <= 0)
                    xJ = getloc(xJ, n, dJ);
                flagJ=1;
            }
            if (dJ == 2 && !flagJ)
            {
                yJ += spJ;
                if (yJ > n)
                    yJ = getloc(yJ, n, dJ);
                flagJ=1;
            }
            if (dJ == 3 && !flagJ) 
            {
                xJ += spJ;
                if (xJ > n)
                    xJ = getloc(xJ, n, dJ);
                flagJ=1;
            }
            flagT=0;
            flagJ=0;
             clock++;
            if (xT == xJ && yT == yJ)swap(dT,dJ);
            else {if (clock % tmT == 0 && clock != 0)
                dT = (dT + 1) % 4;  
            if (clock % tmJ == 0 && clock != 0)
                dJ = (dJ + 1) % 4;}
        }
        cout << yT << ' ' << xT << endl
             << yJ << ' ' << xJ << endl;
    }
    return 0;
}
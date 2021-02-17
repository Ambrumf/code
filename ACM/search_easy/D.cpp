/*
题目背景
给定一个N*M方格的迷宫，迷宫里有T处障碍，障碍处不可通过。给定起点坐标和终点坐标，问: 每个方格最多经过1次，有多少种从起点坐标到终点坐标的方案。在迷宫中移动有上下左右四种方式，每次只能移动一个方格。数据保证起点上没有障碍。

题目描述
无

输入格式
第一行N、M和T，N为行，M为列，T为障碍总数。第二行起点坐标SX,SY，终点坐标FX,FY。接下来T行，每行为障碍点的坐标。

输出格式
给定起点坐标和终点坐标，问每个方格最多经过1次，从起点坐标到终点坐标的方案总数。

输入输出样例
输入 
2 2 1
1 1 2 2
1 2
输出 
1
说明/提示
【数据规模】

1≤N,M≤5
*/
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
#include <stdio.h>
#include <cstring>
using namespace std;
typedef long long ll;
int n, m, sx, sy, fx, fy, T, cnt;
int aa[10000][5], dir[4][2] = {{0, -1}, {0, 1}, {1, 0}, {-1, 0}};
bool check(int x, int y)
{
    if (x >= 0 && x < n && y >= 0 && y < m)
        return 1;
    return 0;
}
void dfs(int x, int y)
{
    if (x == sx && y == sy)
    {
        cnt++;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        if (check(x + dir[i][0], y + dir[i][1]) && !aa[x + dir[i][0]][y + dir[i][1]])
        {
            aa[x + dir[i][0]][y + dir[i][1]] = 1;
            dfs(x + dir[i][0], y + dir[i][1]);
            aa[x + dir[i][0]][y + dir[i][1]] = 0;
        }
    }
}
int main()
{
    memset(aa, 0, sizeof(aa));
    scanf("%d %d %d\n%d %d %d %d", &n, &m, &T, &fx, &fy, &sx, &sy);
    while (T--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        aa[--a][--b] = 1;
    }
    fx--;fy--;sx--;sy--;
    aa[fx][fy] = 1;
    dfs(fx, fy);
    printf("%d", cnt);
    return 0;
}

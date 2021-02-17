/*
10 长方形集合

作者: Turbo时间限制: 1S章节: 类与对象

问题描述 :

 定义一个Point类，包括两个私有属性：int x, int y，它们分别表示一个点的x和y座标。

再定义构造函数：

Point(int x, int y)，即传两个参数，构造一个点对象。

 

定义一个Rectangle类，包括四个私有属性：

Int num, Point topLeft, int width, int height，

它们分别表示长方形的编号（长方形的编号不重复）、左上角顶点的座标，以及横向的宽度和纵向的高度。

注意：在计算机系统里，座标系如下定义：屏幕的左上角的座标是（0,0），x轴是横轴，屏幕的最右端x值最大，y轴是纵轴，屏幕的最下方y值最大。图如下：

1460516066979027970.jpg

再定义构造函数：

Rectangle(int num, int x, int y, int width, int height)

以及实例方法：

int getArea()    //获取该图形的面积

bool isIn(Point p)   //判断传入的点是否在该图形之内（不包括边界），如果在内部返回true，否则返回false

 

定义一个RectangleCollection类，包括两个私有属性：

Rectangle rects[100];   //一个包含长方形的数组，最多100个元素

int count;            //以上数组中长方形的实际个数

还包括实例方法：

void addRectangle(Rectangle r)//添加一个长方形到数组中，并count++

void deleteRectangle(int num) //根据num从数组中删除一个长方形（该长方形的编号等于num）

int inRects(Point p)//根据传入的p，判断p位于rects数组中的哪些长方形之内，返回这些长方形面积之和。

 

请根据自己的需要定义其它构造函数或者其它方法和属性。

 

使用main函数测试以上RectangleCollection类的addRectangle方法、deleteRectangle方法以及inRects方法。main函数可参考如下代码：

 

int main()
{
    int num, topLeftX, topLeftY, width, height;
    int px, py;
    int op;
    RectangleCollection rc;
    Rectangle r;
    Point p;

    while (cin >> op)
    {
        switch (op)
        {
            case 1:
                cin >> num >> topLeftX >> topLeftY >> width >> height;
                r =Rectangle(num, topLeftX, topLeftY, width, height);
                rc.addRectangle(r);
                break;
            case 2:
                cin >> num;
                rc.deleteRectangle(num);
                break;
            case 3:
                cin >> px >> py;
                p=Point(px, py);
                cout << rc.inRects(p) << endl;
                break;
        }
    }
    return 0;
}

 

输入说明 :

可输入多组测试数据，每组测试数据包含两行：
第一行输入一个操作的种类，
1：增加一个长方形
2：删除一个长方形
3：求包含某一指定点的所有长方形的面积和
第二行输入所需要的参数：
对于第1个操作，第二行输入长方形r的信息，包括编号num，左上角顶点x座标、左上角顶点y座标、宽度、高度。
对于第2个操作，第二行输入一个编号num
对于第3个操作，第二行输入一个点p的信息，包括其x座标和y座标。
所有输入都为非负整数，之间以一个空格分隔。无多余空格或空行，两组测试数据之间也无空行。
在输入时，将保证不会向长方形集合中添加一个编号（num）已经存在的长方形。

输出说明 :

仅第3个操作有输出，因此，测试数据中必然包含第3个操作。
第3个操作仅输出一个整数，占一行。
如果有多个输出，每个输出占一行，行首与行尾无空格，中间无空行。

输入范例 :

1
1 4 4 4 4
1
3 3 3 3 3
1
2 2 3 5 4
3
5 5
2
3
3
5 5
1
3 3 3 4 4
3
5 5
输出范例 :

45
36
52

*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
bool isleapyear(int s)
{
    if(s%4==0 && s%100!=0 || s%400==0)return 1;
    else return 0;
}
class Date
{

    int year;

    int month;

    int day;

public:
    Date(int y, int m, int d) : year(y), month(m), day(d){};

    int getYear() const { return year; }

    int getMonth() const { return month; }

    int getDay() const { return day; }
    friend int CalDay(const Date &d1, const Date &d2);
};
int CalDay(const Date &d1, const Date &d2)
{
    if(d1.getYear()!=d2.getYear())
{    int sum=d2.getDay();
    if(isleapyear(d2.getYear()))month[2]=29;
    for(int i=d2.getMonth()-1;i>0;i--)sum+=month[i];
    for(int i=d2.getYear()-1;i>d1.getYear();i--){if(isleapyear(i))sum+=366;else sum+=365;}
    if(isleapyear(d1.getYear()))month[2]=29;
    else month[2]=28;
    sum+=month[d1.getMonth()]-d1.getDay();
    for(int i=d1.getMonth()+1;i<=12;i++)sum+=month[i];   return sum;}
    else if(d1.month==d2.month) return d2.day-d1.day;
    else {
        int sum=d2.day;
        if(isleapyear(d1.getYear()))month[2]=29;
        else month[2]=28;
        sum+=month[d1.month]-d1.day;
        for(int i=d2.month-1;i>d1.month;i--)sum+=month[i];
        return sum;
    }


}
int main()
{

    int y1, m1, d1, y2, m2, d2;

    cin >> y1 >> m1 >> d1;

    cin >> y2 >> m2 >> d2;

    Date date1(y1, m1, d1);

    Date date2(y2, m2, d2);

    cout << CalDay(date1, date2);

    return 0;
}
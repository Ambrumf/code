/*
9 寻找最好成绩

作者: 冯向阳时间限制: 1S章节: 类与对象

问题描述 :

建立一个对象数组，内放若干个学生的学习数据（学号，成绩）。

设计一函数max,使用学生对象数组作为参数，在max函数里找出这些学生中成绩最高者，并输出其学号及成绩。

在main函数中使用并测试之。在main函数中读入学生数据，创建学生对象数组，并调用max函数输出成绩最高者。

如果有多名学生成绩最高，则按照输入的先后顺序输出这些学生的信息。

要求：

(1)学生类的名称为Student，定义如下：

     Student{

        private:

          int num;  //学号

          float score; //分数

        public:  //成员函数仅给出原型，需自行设计

           Student(int num);

           void SetScore(float);

           int GetNum();

           float GetScore();

      };

对于Student类，可自行增加属性和成员函数。

(2)max函数原型为void max( Student arr[] ,int n); //函数体需自行设计



main函数可参考如下实现：

int main( )

{

   int i, n, num;

   float score;

   cin>>n;

   Student stu[n];

   for( i = 0; i < n; i++)

   {

        cin>>num>>score;

        stu[i] = Student(num);

        stu[i].SetScore(score);

    }

    max(stu, n );

    return 0;

}





输入说明 :

输入的第一行为学生的数目n，其后n行为n个学生的数据，每个学生的数据占一行（学号，成绩）

学号与成绩之间以空格分隔，每行的开头和结尾无多余的空格。





输出说明 :

输出成绩最高者的学号和成绩，其间以一个空格分隔。

如果输出多名学生，则每名学生独占一行。

输出无多余空行及多余空格。

输入范例 :

10
100 21
101 22
102 23
105 28
104 22
103 28
106 2
107 24
108 3
109 8
输出范例 :

105 28
103 28

*/
#include <bits/stdc++.h>
using namespace std;
class Point{
    private:
    int x;
    int y;
    public:
    Point(){};
    Point(int a,int b):x(a),y(b){};
    void setxy(int a,int b){x=a;y=b;}
    int gx(){return x;}
    int gy(){return y;}
};
class Rectangle{
    private:
    int num;
    Point topleft;
    int width;
    int height;
    public:
    Rectangle(){};
    Rectangle(int _num, int _x, int _y, int _width, int _height){
        num=_num;
        topleft.setxy(_x,_y);
        width=_width;
        height=_height;
        }
    int getNum(){return num;}
    int getArea()
    {
        return width*height;
    }
    bool isIn(Point p)
    {
        if(topleft.gx()<p.gx() && topleft.gx()+width>p.gx() && topleft.gy()<p.gy() && topleft.gy()+height>p.gy())return 1;
        return false;
    }
};
class RectangleCollection
{
    private:
    Rectangle rects[100];
    int count;
    public:
    RectangleCollection(){count=0;}
    void addRectangle(Rectangle r){
        rects[count]=r;
        count++;
    }
    void deleteRectangle(int a) 
    {
        int num,i;
        for(i=0;i<count;i++) if(rects[i].getNum()==a)break;
        for(;i<count;i++)rects[i]=rects[i+1];
        count--;
    }
    int inRects(Point p)
    {
        int sum=0;
        for(int i=0;i<count;i++)
        {
            if(rects[i].isIn(p))
            {
                sum+=rects[i].getArea();
            }
        }
        return sum;
    }
};

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


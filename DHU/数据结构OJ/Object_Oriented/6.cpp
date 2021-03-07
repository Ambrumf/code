/*
6 盒子类

作者: 冯向阳时间限制: 1S章节: 类与对象

问题描述 :

定义盒子Box类，计算盒子的体积及表面积。Box类包括：

私有数据成员：

  int Length //Box的长度

  int Width   //Box的宽度

  int Height  //Box的高度

公有成员函数：

  void InitBox( int x, int y, int z); //设置Box的尺寸

  void setVolume( );            //计算Box的体积

  void setArea( );             //计算Box的表面积

  void show( );              //输出盒子的信息，输出形式见“输出说明”



要求使用以下main函数测试Box类：

int main()

{ 

     int intLength, intWidth, intHeight;

     Box box;  

     cin>>intLength;

     cin>>intWidth;

     cin>>intHeight;

     box.initBox(intLength,intWidth,intHeight); 

     box.setVolume(); 

     box.setArea(); 

     box.show(); 

     return 0;

}



输入说明 :

输入三个整数：Length（长）、Width（宽）、Height（高），整数之间以空格分隔。

输入的整数都为非负数。



输出说明 :

输出三行：

第一行输出Length（长）、Width（宽）、Height（高），整数之间以一个空格分隔

第二行输出体积

第三行输出表面积



输出行之间无多余的空行和空格

输入范例 :

1 2 3
输出范例 :

1 2 3
6
22

*/
#include <bits/stdc++.h>
using namespace std;

class student
{
private:
    string name;
    int math;
    int english;
    int sum;
    int num;

public:
    student(string a, int b, int c,int d)
    {
        name = a;
        math = b;
        english = c;
        num=0;
    };
    student(){};
    int calcTotal()
    {
        sum = math + english;
        return sum;
    };
    string getName()
    {
        return name;
    };
    int getMath() { return math; }
    int getEnglish() { return english; }
    int getTotal() { return sum; }
    int getnum(){return num;}
};

bool cmp(student a,student b)
{
    if(a.getTotal()!=b.getTotal())return a.getTotal()>b.getTotal();
    else return a.getnum()<b.getnum();
}
void sortStudent(student s[],int a)
{
    sort(s,s+a,cmp);
}
int main()

{


    student s[3], temp;

    string sName; //或char sName[20];

    int sMath, sEnglish;

    int i;

    for (i = 0; i < 3; i++)

    {

        cin >> sName >> sMath >> sEnglish;

        s[i] = student(sName, sMath, sEnglish,i);

        s[i].calcTotal();
    }

    sortStudent(s, 3);

    for (i = 0; i < 3; i++)

    {

        cout << s[i].getName() << " " << s[i].getMath() << " " << s[i].getEnglish() << " " << s[i].getTotal() << endl;
    }

    return 0;
}

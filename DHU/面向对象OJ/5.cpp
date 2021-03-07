/*
5 函数模板：两点间的距离

作者: 冯向阳时间限制: 1S章节: 其它

问题描述 :

使用模板函数，分别求出int型数的两点间的距离和浮点型数的两点间的距离。在main函数中测试运用模板函数。



函数原型为：

template <class T>

T distance( T, T, T, T);



main函数可参考以下代码编写：

int main( ){

   int i_x1, i_y1, i_x2, i_y2;

   double d_x1, d_y1, d_x2, d_y2;



   cin>>i_x1>>i_y1>>i_x2>>i_y2;

   cin>>d_x1>>d_y1>>d_x2>>d_y2;



   cout<<distance( i_x1, i_y1, i_x2, i_y2 )<<endl;



   cout<<distance(d_x1, d_y1, d_x2, d_y2 )<<endl;



   return 0;

}



输入说明 :

每组测试数据为两行，格式如下：

i_x1 i_y1 i_x2 i_y2  //两个int型测试点的x坐标，y坐标，坐标之间用空格分隔

d_x1 d_y1 d_x2 d_y2  //两个double型测试点的x坐标，y坐标，坐标之间用空格分隔



行与行之间无多余的空行和空格。

输出说明 :

输出数据分两行，分别对应int型和double型的两点间的距离



行与行之间无多余的空行和空格。

输入范例 :

1 1 2 1
10.0 20.0 5.0 5.0

输出范例 :

1
15.8114

*/
#include <bits/stdc++.h>
using namespace std;
class Box
{
private:

  int Length; //Box的长度

  int Width;   //Box的宽度

  int Height;  //Box的高度

  int square;

  int volume;

public:
    void initBox(int x, int y, int z)
    {
        Length=x;
        Width=y;
        Height=z;
    } //设置Box的尺寸

    void setVolume()
    {
        volume=Length*Width*Height;
    } //计算Box的体积

    void setArea(){
        square=2*(Length*Width+Length*Height+Width*Height);
    } //计算Box的表面积

    void show()//输出盒子的信息，输出形式见“输出说明”
    {
        cout<<Length<<' '<<Width<<' '<<Height<<endl
            <<volume<<endl<<square<<endl;
    }

};

int main()
{

    int intLength, intWidth, intHeight;

    Box box;

    cin >> intLength;

    cin >> intWidth;

    cin >> intHeight;

    box.initBox(intLength, intWidth, intHeight);

    box.setVolume();

    box.setArea();

    box.show();

    return 0;
}
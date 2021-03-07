/*
4 复制字符串

作者: Turbo时间限制: 1S章节: 其它

问题描述 :

 

内容：对于字符串，实现以下复制功能数，并编写main函数测试这些函数：
实验内容：使用默认形参或者重载实现

cpy函数：
原型可为：
string cpy(string src, int startIndex, int endIndex)

功能：从字符串src复制部分字符形成新字符串并返回。可指定复制的起始位置和结束位置，即从startIndex到endIndex之间的所有字符都复制到结果字符串中。startIndex默认为0， endIndex默认为到字符串尾部。

比如，
cpy(src)： 将src的所有字符都复制并返回
cpy(src, 3)：将src从下标为3的位置直到结尾的所有字符都复制并返回

cpy(src, 3, 5)：将src的第3、4、5个字符复制并返回

 

main函数可参考以下代码编写：
int main()
{
 int num, length, index, startIndex, endIndex;
 string src, dest;

 while(cin >> num)
 {
  switch(num)
  {
   case 1:
    cin >> src;
    cout << cpy(src) << endl;
    break;
   case 2:
    cin >> src >> startIndex;
    cout << cpy(src, startIndex) << endl;
    break;
   case 3:
    cin >> src >> startIndex >> endIndex;
    cout << cpy(src, startIndex, endIndex) << endl;
    break;
  }
 }
 return 0;
}

 

 

输入说明 :

 

输入时，每组测试数据包含两行，第一行输入一个整数，指定需要完成的操作，第二行为该操作需要的数据。
对于每个整数对应的操作及其相应数据的输入方式如下（输入的字符串中不包含空格）：

1：对应cpy，第二行输入字符串src


2：对应cpy，第二行输入字符串src和整数startIndex，以空格分隔。复制从startIndex开始的子字符串，下标从0开始。
异常处理：如果startIndex不合法，则不复制任何字符，结果为空字符串。


3：对应cpy，第二行输入字符串src和整数startIndex、endIndex，以空格分隔。
异常处理：如果startIndex、endIndex不合法，则不复制任何字符，结果为空字符串。

 

输出说明 :

 对于每组测试数据，输出对应的结果。如果结果为空字符串，则输出一个空行。

每行行首与行尾无多余空格，第一行之前与最后一行之后无多余空行。

 

输入范例 :

1
aabbccdd
2
abcdef 4
2
abcdef 7
3
abcdef 0 3
3
abcdef 0 6
3
abcdef 3 2
3
abcdef 0 0


输出范例 :

aabbccdd
ef

abcd


a

*/
#include<bits/stdc++.h>
using namespace std;
template <class T>

T distance( T x1, T y1, T x2 , T y2)
{
 return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int main( ){

   int i_x1, i_y1, i_x2, i_y2;

   double d_x1, d_y1, d_x2, d_y2;



   cin>>i_x1>>i_y1>>i_x2>>i_y2;

   cin>>d_x1>>d_y1>>d_x2>>d_y2;



   cout<<distance( i_x1, i_y1, i_x2, i_y2 )<<endl;



   cout<<distance(d_x1, d_y1, d_x2, d_y2 )<<endl;



   return 0;

}

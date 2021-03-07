/*
3 删除字符(函数重载)

作者: Turbo时间限制: 1S章节: 其它

问题描述 :

内容：对于字符串，实现以下删除字符的函数，并编写main函数测试这些函数：
实验目的：学习函数重载的使用。

1. remove函数：
从形参传入一个字符，将该字符从字符串中删除。

2.remove函数：
从形参传入一个下标index，将index处的字符从字符串中删除。

3.remove函数：
从形参传入两个下标startIndex和endIndex，将从startIndex到endIndex范围内的字符从字符串中删除。



main函数可参考以下代码编写：

int main()
{
 int num, index, startIndex, endIndex;
 char delChar;
 string src, dest;

 while(cin >> num)
 {
  switch(num)
  {
   case 1:
    cin >> src >> delChar;
    cout << remove(src, delChar) << endl;
    break;
   case 2:
    cin >> src >> index;
    cout << remove(src, index) << endl;
    break;
   case 3:
    cin >> src >> startIndex >> endIndex;
    cout << remove(src, startIndex, endIndex) << endl;
    break;
  }
 }
 return 0;
}



输入说明 :

输入时，每组测试数据包含两行，第一行输入一个整数，指定需要完成的操作，第二行为该操作需要的数据。
对于每个整数对应的操作及其相应数据的输入方式如下（输入的字符串中不包含空格）：
1：对应remove，第二行输入字符串和一个字符（以空格分隔），将字符从字符串中删除。

2：对应remove，第二行输入字符串和index（以空格分隔），将index处的字符从字符串中删除。
异常处理：如果index不合法，则不删除字符。

3：对应remove，第二行输入字符串和startIndex、endIndex（以空格分隔），将从startIndex到endIndex范围内的字符从字符串中删除。
异常处理：如果startIndex、endIndex不合法，则不删除字符。

输出说明 :

对于每组测试数据，输出对应的结果。如果结果为空字符串，则输出一个空行。

每行行首与行尾无多余空格，第一行之前与最后一行之后无多余空行。



输入范例 :

1
acdef b
2
abcdef 3
2
abcdef 6
3
abcd 0 3
3
abcdef 3 5
3
abcdef 3 7
输出范例 :

acdef
abcef
abcdef

abc
abcdef

*/
#include<bits/stdc++.h>
using namespace std;

string cpy(string src)
{
    string t=src;
    return t;
}
string cpy(string src, int startIndex)
{
    if(startIndex>src.size()-1)return "";
    string t=src.substr(startIndex);
    return t;
}
string cpy(string src, int startIndex, int endIndex)
{
    if(startIndex>endIndex || startIndex<0 || endIndex>src.size()-1)return "";
    int n=endIndex-startIndex+1;
    string t=src.substr(startIndex,n);
    return t;
    
}
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
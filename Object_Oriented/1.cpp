/*
字符串填充（默认形参）

作者: Turbo时间限制: 1S章节: 其它

问题描述 :

实验目的：学习函数的默认形参的使用。

内容：对于字符串，实现以下填充函数，并编写main函数测试这些函数：

1. padLeft函数：

功能：将一字符串左填充（在左边填充指定字符）至n个字符的长度，可指定填充字符，比如填充“*”，如果不指定填充字符，则填充空格。

提示：为实现以上功能，函数原型可为：

   void  padLeft(char string1[], char string2[],  int n, char padding=' ')

或:

    string padLeft(string string1, int n, char padding=' ')

这里使用了默认形参。

string1是原字符串，string2是填充之后的结果。

 

类似地，可编写右填充函数，函数原型参照padLeft。

 

2. padRight函数：

功能：将一字符串右填充至n个字符的长度，可指定填充字符，比如填充“*”，如果不指定填充字符，则填充空格。

 

main函数可参考如下进行编写：


int main()
{
 int num, length;
 char padding;
 string src, dest;

 while(cin >> num)
 {
  switch(num)
  {
   case 11:
    cin >> src >> length;
    cout << padLeft(src, length) << endl;
    break;
   case 12:
    cin >> src >> length >> padding;
    cout << padLeft(src, length, padding) << endl;
    break;
   case 21:
    cin >> src >> length;
    cout << padRight(src, length) << endl;
    break;
   case 22:
    cin >> src >> length >> padding;
    cout << padRight(src, length, padding) << endl;
    break;
  }
 }
 return 0;
}

‍

 

输入说明 :

测试程序输入时，每组测试数据包含两行，第一行输入一个整数，指定需要完成的操作，第二行为该操作需要的数据。
对于每个整数对应的操作及其相应数据的输入方式如下（输入的字符串中不包含空格）：
11：对应padLeft，第二行输入字符串string1、整数n，其间以空格分隔（由于没指定填充字符，所以填充空格）
异常处理：如果string1的长度大于等于n，则不填充任何字符。

12：对应padLeft，第二行输入字符串string1、整数n、一个填充字符，其间以空格分隔（填充字符不为空格）
异常处理：如果string1的长度大于等于n，则不填充任何字符。

21：对应padRight，第二行输入字符串string1、整数n，其间以空格分隔（由于没指定填充字符，所以填充空格）
异常处理：如果string1的长度大于等于n，则不填充任何字符。

22：对应padRight，第二行输入字符串string1、整数n、一个填充字符，其间以空格分隔（填充字符不为空格）
异常处理：如果string1的长度大于等于n，则不填充任何字符。

输出说明 :

对于每组测试数据，输出对应的结果。如果结果为空字符串，则输出一个空行。

每行行首与行尾无多余空格，第一行之前与最后一行之后无多余空行。

 

输入范例 :

11
abcdef 4
12
abcdef 8 *
21
abcdef 6
22
abcdef 10 .
输出范例 :

abcdef
**abcdef
abcdef
abcdef....

*/
#include<bits/stdc++.h>
using namespace std;
string padLeft(string string1, int n, char padding=' ')
{
    if(string1.length()>n)return string1;
    string cat(n-string1.size(),padding);
    string ans=cat+string1;
    return ans;
}
string padRight(string string1, int n, char padding=' ')
{
    if(string1.length()>n)return string1;
    string cat(n-string1.size(),padding);
    string ans=string1+cat;

    return ans;
}

int main()
{    
 int num, length;
 char padding;
 string src, dest;

 while(cin >> num)
 {
  switch(num)
  {
   case 11:
    cin >> src >> length;
    cout << padLeft(src, length) << endl;
    break;
   case 12:
    cin >> src >> length >> padding;
    cout << padLeft(src, length, padding) << endl;
    break;
   case 21:
    cin >> src >> length;
    cout << padRight(src, length) << endl;
    break;
   case 22:
    cin >> src >> length >> padding;
    cout << padRight(src, length, padding) << endl;
    break;
  }
 }
 return 0;
}

 
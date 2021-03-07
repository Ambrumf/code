/*
8 寻找最好成绩

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
class Student 
{
    private:
    int num;
    string name;
    double chinese;
    double math;
    double average;
    public:
    string getName(){return name;}
    int getnum(){return num;}
    bool setChinese(double score)
    {
        if(0<=score && 100>=score)
        {chinese=score;
        return true;}
        else {chinese=0;return false;}

    }
    bool setMath(double score)
    {
        if(0<=score && 100>=score)
        {math=score;
        return true;}
        else {math=0;return false;}

    }
    Student(){};
    Student(int number , string a){num=number;name=a;}
    void calaverage()
    {
        average=((double)math+chinese)/2;
    }
    void printall()
    {
        cout<<num<<' '<<name<<' '<<chinese<<' '<<math<<' '<<average<<endl;
    }
    friend void findStudent(Student stu[],int n, string a)
    {
        vector<Student> v;
        for(int i=0;i<n;i++)if(stu[i].getName().find(a)!=-1)v.push_back(stu[i]);
        if(!v.empty())for(int i=0;i<v.size();i++)v[i].printall();
        else cout<<"Not found."<<endl;
        
    }

};
bool cmp(Student a,Student b)
{
    return a.getnum()<b.getnum();
}
int main()

{

  int n,i;

  int number;

  string name, searchName;

  double math,chinese;

  cin>>n;

  Student *stu;
  stu=new Student[n];

  for(i=0;i<n;i++)

  {

    cin>>number>>name>>chinese>>math;

    stu[i] = Student(number, name);

    stu[i].setChinese(chinese);

    stu[i].setMath(math);

    stu[i].calaverage();

  }

  cin>>searchName;  //输入需要查找的姓名

  findStudent(stu, n, searchName);  //调用函数，查找学生，输出信息
    delete []stu;
  return 0;

}

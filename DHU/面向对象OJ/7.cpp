/*
7 学生数组排序

作者: Turbo时间限制: 1S章节: 类与对象

问题描述 :

输入3个学生的姓名和英语、数学成绩，需要求每个学生的总成绩并对3个学生按总成绩降序输出，请编写一个类student,实现该功能。

student类的数据成员包括（但不限于）name（姓名，类型为string）、math(数学)、english(英语)。要求用成员函数实现以下功能：

1、使用构造函数给各属性赋初值

2、调用实例方法计算学生总成绩

3、其它必要的功能



另设计一个函数对学生按总成绩降序排列，并在main函数中输出学生信息。



main函数的实现参考如下代码，请设计student类和sortStudent函数。

main函数中声明了一个数组，包含三个对象，然后输入必要信息，给三个对象赋值并计算总成绩，之后对数组排序并按总成绩降序输出学生姓名及其成绩。

对于两个总成绩相同的学生，排序后不改变他们原来的顺序。







int main()

{

    student s[3],temp;

    string sName;//或char sName[20];

    int sMath, sEnglish;

    int i;



    for(i=0; i<3; i++)

    {

        cin>>sName>>sMath>>sEnglish;

        s[i]=student(sName, sMath, sEnglish);

        s[i].calcTotal();

    }

    sortStudent(s, 3);

    for(i=0;i<3;i++)

    {

        cout<<s[i].getName()<<" "<<s[i].getMath()<<" "<<s[i].getEnglish()<<" "<<s[i].getTotal()<<endl;

    }

    return 0;

}



输入说明 :

输入三行，表示三个学生的信息，每一行包括学生姓名、数学成绩、英语成绩，中间以空格分隔。

成绩为0到100之间的整数。

输出说明 :

输出三行，按总成绩降序输出学生姓名及其数学成绩、英语成绩、总成绩。

如果有两个学生总成绩相同，那么原来排在前的学生先输出。

输入范例 :

John 80 90
Kevy 85 90
Lucy 90 80
输出范例 :

Kevy 85 90 175
John 80 90 170
Lucy 90 80 170


#include <bits/stdc++.h>
using namespace std;

class  Student{

        private:

          int num;  //学号

          float score; //分数

          int order;

        public:  //成员函数仅给出原型，需自行设计

           Student(int num,int a){this->num=num;order =a;};
           Student(){};

           void SetScore(float a){score=a;};

           int GetNum(){return num;};

           float GetScore(){return score;};

           int getorder(){return order;}

      };
    bool cmp(Student  a,Student b)
    {
        if(a.GetScore()!=b.GetScore())return a.GetScore()>b.GetScore();
        else return a.getorder()<b.getorder();
    }
void max(Student s[],int a)
{
    vector<Student> v;
    int mmax=-1;
    for(int i=0;i<a;i++)

    {
        if(s[i].GetScore()==mmax){v.push_back(s[i]);}
        if(s[i].GetScore()>mmax){v.clear();v.push_back(s[i]);mmax=s[i].GetScore();}
    }
    sort(v.begin(),v.end(),cmp);
    for(auto x:v)
    {
        cout<<x.GetNum()<<' '<<x.GetScore()<<endl;
    }
}
int main( )

{

   int i, n, num;

   float score;

   cin>>n;

   Student *stu = new Student[n];

   for( i = 0; i < n; i++)

   {

        cin>>num>>score;

        stu[i] = Student(num,i);

        stu[i].SetScore(score);

    }

    max(stu, n );
    delete []stu;
    return 0;

}
*/
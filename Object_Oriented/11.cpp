/*
11 类和对象：使用日期类计算相隔天数

作者: 冯向阳时间限制: 1S章节: 类与对象

问题描述 :

现有日期类Date。Date类定义如下：

class Date{

     int year;

     int month;

     int day; 

   public:

     Date(int y,int m,int d):year(y),month(m),day(d){};  

     int getYear() const {return year;}

     int getMonth() const {return month;}

     int getDay() const {return day;}

     

}; 



要求：使用日期类，设计1个用户函数CalDay，计算出两个日期之间的相隔天数，在屏幕上输出结果。

CalDay函数的原型定义如下：

int CalDay(const Date &d1, const Date &d2) //d1:较小的日期赋给d1，d2:较大的日期



要求使用以下main函数测试：

int main(){    

    int y1,m1,d1,y2,m2,d2;

    cin>>y1>>m1>>d1;

    cin>>y2>>m2>>d2;

    Date date1(y1,m1,d1);  

    Date date2(y2,m2,d2);     

    cout<<CalDay(date1,date2);

    return 0;

}



输入说明 :

测试数据为2行，

第一行：开始日期（分别为年、月、日的值，值与值之间用空格分隔），例如：2010 4 7

第一行：结束日期（分别为年、月、日的值，值与值之间用空格分隔），例如：2017 4 7



注意：开始日期在结束日期之前



输出说明 :

输出结果为截止日期与开始日期的相隔天数。





输入范例 :

2010 2 3
2017 3 17
输出范例 :

2599
*/
#include<bits/stdc++.h>
using namespace std;
class Student{ 

   public:

      void Set_StuNum(int a){stu_num=a;}; //自行设计

      int Get_StudNum(){return stu_num;};  //自行设计

      void Set_Score(float a){score=a;}; //自行设计

      float Get_Score(){return score;};  //自行设计
    
      friend void mmax(Student *s, int n , int &mst, float &msc)
      {
          mst=-1;
          msc=-1;
          for(int i=0;i<n;i++)
          {
              if(s[i].score>msc){msc=s[i].score;mst=s[i].stu_num;}
             

          }
      };
   private:   

      int stu_num; //学号

      float score; //分数   

};
int main(){ 

  int n, stu_num, max_stu_num;

  float score, max_score;

  cin>>n;
    Student *stu;
  stu = new Student[n];

  for( int i = 0; i < n; i++ ){

    cin>>stu_num>>score; 

    stu[i].Set_StuNum(stu_num);

    stu[i].Set_Score(score);

  }

  mmax(stu, n, max_stu_num, max_score);


  cout<<max_stu_num<<" "<<max_score;  

  return 0;

}

/*
12 对象数组和对象指针

作者: 冯向阳时间限制: 1S章节: 类与对象

问题描述 :

要求：在给定的Student类的基础上建立一个对象数组，内放n个学生的数据（学号，分数）。请设计一个用户函数max，用指向对象的指针作为函数参数。max函数的功能是找出这n个学生中成绩最高者（假定无相同的成绩），并输出其学号。



Student类如下：

class Student{ 

   public:

      void Set_StuNum(int); //自行设计

      int Get_StudNum();  //自行设计

      void Set_Score(float); //自行设计

      float Get_Score();  //自行设计

   private:   

      int stu_num; //学号

      float score; //分数   

};



max函数原型为：

void max(Student *, int, int &, float &); //5个形参的含义分别为：对象指针，学生数，最高分的学生学号，最高分



要求使用以下main函数测试：

int main(){ 

  int n, stu_num, max_stu_num;

  float score, max_score;

  cin>>n;



  Student stu[n];

  for( int i = 0; i < n; i++ ){

    cin>>stu_num>>score; 

    stu[i].Set_StuNum(stu_num);

    stu[i].Set_Score(score);

  }



  max(stu, n, max_stu_num, max_score);



  cout<<max_stu_num<<" "<<max_score;  

  return 1;

}



输入说明 :

第一行：学生数目n。

第二行至第n+1行：每行输入：学号 分数。 二者之间以空格分隔，行与行之间无空行。



输出说明 :

最高分的学生学号 分数。二者之间以空格分隔

输入范例 :

5
1001 70.5
1002 78
1003 68
1004 82.5
1005 81
输出范例 :

1004 82.5
*/
#include<bits/stdc++.h>
using namespace std;
class Student{ 
       private:   

      int stu_num; //学号

      float score; //分数   

   public:

      void Set_StuNum(int a){stu_num=a;}; //自行设计

      int Get_StudNum(){return stu_num;};  //自行设计

      void Set_Score(float a){score=a;}; //自行设计

      float Get_Score(){return score;};  //自行设计

      friend void Score_Trans(Student &s)
      {
          cout<<s.stu_num<<' ';
          if(s.score>=90)cout<<"优";
          else if(s.score>=80)cout<<"良";
          else if(s.score>=70)cout<<"中";
          else if(s.score>=60)cout<<"及格";
          else cout<<"不及格";
      };
};
int main(){ 

  int n, i, stu_num, max_stu_num;

  float score, max_score;

  cin>>n;

  Student *stu;

  new Student[n];

  for( i = 0; i < n; i++ ){

    cin>>stu_num>>score; 

    stu[i].Set_StuNum(stu_num);

    stu[i].Set_Score(score);

  }


  for( i = 0; i < n; i++ ){

    Score_Trans(stu[i]);

    if(i < n - 1) cout<<endl;

  }


  return 0;

}

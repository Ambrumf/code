/*
13 学生成绩转换（友元函数）

作者: 冯向阳时间限制: 1S章节: 类与对象

问题描述 :

描述：有一个学生类Student,包括学号、成绩（百分制）。要求设计一个友元函数Score_Trans，将百分制成绩转换成对应的等级输出到屏幕上：大于等于90：优；80~90：良；70~79：中；60~69：及格；小于60：不及格。



Student类如下：

Student类如下：

class Student{ 

   public:

      void Set_StuNum(int); //自行设计

      int Get_StudNum();  //自行设计

      void Set_Score(float); //自行设计

      float Get_Score();  //自行设计

      friend void Score_Trans(Student &s);

   private:   

      int stu_num; //学号

      float score; //分数   

};



要求使用以下main函数测试：

int main(){ 

  int n, i, stu_num, max_stu_num;

  float score, max_score;

  cin>>n;



  Student stu[n];

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



输入说明 :

第一行：学生数目n。

第二行至第n+1行：每行输入：学号 分数。 二者之间以空格分隔，行与行之间无空行。



输出说明 :

第一行之n行：学生学号 分数登机。二者之间以空格分隔，行与行之间无空行

输入范例 :

5
1001 70.5
1002 98
1003 68
1004 82.5
1005 58
输出范例 :

1001 中
1002 优
1003 及格
1004 良
1005 不及格
*/
#include<bits/stdc++.h>
using namespace std;
class Student{ 
       
  int norm, ex, final,overall;
  char name[15];
  public:
  void init(char *name1, int nor1, int ex1, int fin1){
    strcpy(name,name1);
    norm=nor1;
    ex=ex1;
    final=fin1;
  }
  void fun(){
    overall=norm*0.2+ex*0.25+final*0.55+0.5;
    if(final<50)overall=final;
  }; 
  void print(){
    cout<<name<<' '<<norm<<' '<<ex<<' '<<final<<' '<<overall<<endl;
  };
  friend void sort(Student st[], int n)
  {
    for(int i=0;i<n;i++)
        for(int j=i;j<n-i-1;j++)
          if(st[j].overall<st[j+1].overall)swap(st[j],st[j+1]);
  }
};
int main(){ 

  int n;

  int norm, ex, final;

  char name[15];

  cin>>n;



  Student stu[n];

  for( int i = 0; i < n; i++ ){

    cin>>name>>norm>>ex>>final;   

    stu[i].init(name,norm,ex,final);   

    stu[i].fun(); 

  }



  sort(stu,5); 



  for(int i = 0;i < n; i ++){   

    stu[i].print();  

  } 

  return 0;

}

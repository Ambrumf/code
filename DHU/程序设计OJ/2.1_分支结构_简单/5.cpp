#include <stdio.h>

int main()

{

       char grade;

     scanf("%c", &grade);
     switch(grade)
     {
         case 'a' :grade = 'A';break;
         case 'b' :grade = 'B';break;
         case 'c' :grade = 'C';break;
         case 'd' :grade = 'D';break;
         case 'e' :grade = 'E';break;
     }

     switch(grade)

     {

            case 'A':

                   printf("90-100\n");break;

            case 'B':

                   printf("80-89\n");break;

            case 'C':

                   printf("70-79\n");break;

            case 'D':

                   printf("60-69\n");break;

            case 'E':

                   printf("<60\n");break;

            default:

                   printf("input error\n");

     }

     return 0;

}

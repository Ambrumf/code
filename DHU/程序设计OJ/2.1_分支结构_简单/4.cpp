#include <stdio.h>

int main()

{

     char ch;

     ch = getchar();

     if ('0'<= ch && ch<= '9')

            printf("digit\n");

     else

            printf("error\n");

   return 0;

}

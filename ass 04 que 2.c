#include <stdio.h>
int main ()
{
int n=2,_;
   printf("Line: %d,n=%d\n",__LINE__,n);
   while (printf("Line:%d,n=%d\n"__LINE__,n),n){


    printf("Line: %d,n=%d\n",__LINE__,n--);

   }

    printf("Line:%d,n=%d\n",__LINE__,n);













    return 0;
}

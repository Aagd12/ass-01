#include <stdio.h>

int main()
{
   int n=2,x=3;
  printf("%d\n",x);
   printf("Line:%d n=%d\n",__LINE__,n);
while ( printf("Line:%d n=%d\n",__LINE__,n),n){
     printf("Line:%d %d\n",__LINE__,--n);
  int   x=5;
     printf("%d\n",x);
}


 printf("Line:%d n=%d\n",__LINE__,n);


  printf("%d\n",x);





   return 0;

}





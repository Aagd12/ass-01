#include <stdio.h>
  int main ()
   {
 double sum=0,p=1,q=1 ,n=3,i;
int sign=1;
for (i=1;i<=n;i++){
    sum+=sign*p/q;
    q++;
    sign*=-1;}
    printf("%g",sum);

       return 0;
   }

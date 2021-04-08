#include <stdio.h>
  int main ()
   {
 double s=0,p=1.0,q=1 ,n=10,i,x=1.0,s_e;
int sign=1;
for (i=1;i<=n;i++){

     p*=x;
     q*=i;
     s=s+p/q;


    }
    s_e=s+1;
    printf("%g",s_e);

       return 0;
   }


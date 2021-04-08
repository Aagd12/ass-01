
#include <stdio.h>
  int main ()
   {
 double s=0,p=1.0,q=1 ,n=10,i,x=1.0,s_cos_x=0;

 int sign=1;
for (i=1;i<=n;i++){
s_cos_x+= sign*p/q;

 p*=x*x;
 q*=2*i*(2*i-1);
 sign*=-1;


}

    printf("%g",s_cos_x);

       return 0;
   }

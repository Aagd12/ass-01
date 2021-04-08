#include <stdio.h>
  int main ()
   {
 double s=0,p=1.0,q=1 ,n=10,i,x=1.0,s_sin_x;
int sign=-1;
for (i=2;i<=n;i++){


     q*=(2*i-1)*(2*i-2);
     s=s+sign*p/q;
sign*=-1;
 p*=x*x;
    }
s_sin_x=s+x;
    printf("%g",s_sin_x);

       return 0;
   }



#include <stdio.h>
  int main ()
   {
 double s_pai=0,p=1.0,q=1 ,n=2,i;
int sign=1;
for (i=1;i<=n;i++){
     q=2*i-1;
    s_pai=s_pai+4*sign*p/q;

    sign*=-1;
    }
    printf("%g",s_pai);

       return 0;
   }

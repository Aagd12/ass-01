 #include <stdio.h>
  int main ()
   {
 double s_log_x=0,p=1.0,q=1 ,n=10,i,x=1.0;
int sign=1;
for (i=1;i<=n;i++){
    p*=x;
     q=i;
   s_log_x=s_log_x+sign*p/q;

    sign*=-1;
    }
    printf("%g",s_log_x);

       return 0;
   }


 #include <stdio.h>
 int main()
 {
     int a,b,min=0,gcd;
     a=6,b=8;
     min=a<b?a:b;

     for(;;--min){
        if(a%min==0&&b%min==0){
      printf("GCD:%d",min);


          break;
        }


     }



















     return 0;
 }

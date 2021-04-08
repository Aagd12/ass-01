#include <stdio.h>
int isprime(int a){
for (int i=2;i<a;i++){
    if(a%i==0){
        return 0;}
    }
   return 1;

}







int  main(int a,int b) {
  a=3,b=1000;
 for (;a<=b;a++){
 if(isprime(a)){
  printf("%d\n",a);
     }

  }
}


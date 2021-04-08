#include <stdio.h>

int main(int a,int b){
    a=2,b=1000;
  for(;a<b;a++){

if(isarmstrongnumber(a) ){

   printf("%d\n",a);}
  }

}
   int  isarmstrongnumber(int a){
       int s=a,sum=0;
   while(s>0){
     int degit =s%10;
sum+=degit*degit*degit;
s/=10;

}
 if(sum==a){
   return 1;
 }


 return 0;
}


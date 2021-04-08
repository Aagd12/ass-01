#include <stdio.h>
int main (int a,int b){
   a=2,b=1000;
   for(;a<b;a++){
  if(perfectnumber(a)){
   printf("%d is perfect number\n",a);
    }
 }
}

int perfectnumber(int a){
int sum=0;
for(int i=a;i>1;i--){
    if(a%(i-1)==0){
sum+=(i-1);

  }

}



if(sum==a){
   return 1;
}
return 0;
}

#include <stdio.h>

int main(){
  int n=407;
  int isarmstrongnumber (int n);
    if(isarmstrongnumber(n)){
    printf("%d is armstrong number\n",n);
}
  else {
  printf("%d is not armstrong number\n",n);
}

}
   int  isarmstrongnumber(int n){
       int s=n,sum=0;
   while(s>0){
     int degit =s%10;
sum+=degit*degit*degit;
s/=10;
printf("%d\n",sum);
}
 if(sum==n){
   return 1;
 }


 return 0;
}


#include <stdio.h>
  int main()

 {
   int n=145,i,fact_=1,sum=0 ,degit,m;

for(i=1;i<=n;i++){
    fact_*=i;
}
printf("%d",fact_);


m=n;
while(m>0){
 degit=m%10;
 fact_=1;
   for(i=1;i<=degit;i++){

   fact_*=i;}
printf("%d\n",fact_);


   sum+=fact_;

     m/=10;
}

 printf("%d\n",sum);
  if(sum==n)

   printf("%d is strong number ",n);
   else
 printf("%d is not strong number ",n);



    return 0;


}

#include <stdio.h>

  int main(){
int b=5;
  int a[5];

  printf("%d",sizeof(a)/sizeof(int));

  printf("elment of a array a:");

  for(int i=0;i<5 ;i++){

     scanf("%d",&a[i]);

  }

printf("enter the value of each array:");

for(int i=0;i<5;i++){

   printf("%d",a[i]);

}
return 0;

  }

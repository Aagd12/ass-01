#include <stdio.h>
int main()
{
  int a[5];
  printf("enter the elment of array");
  for(int i=0;i<5;i++){

   scanf("%d",&a[i]);

  }
  printf("write the reverse of array elment :");
   int sum=0;
   for(int i=4;i>=0;i--){

   sum+=a[i];
    printf("%d",a[i]);
   }
   printf("%d",sum);
return 0;
}

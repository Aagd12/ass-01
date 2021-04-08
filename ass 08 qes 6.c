#include <stdio.h>
int f(int b[5]){

   for(int i=0;i<5;i++){
   if(b[i]%2!=0){
    printf("%d\n",b[i] );
     }
   }

  }




int main()
{
  int a[5];
  printf("enter the elment of array");
  for(int i=0;i<5;i++){

   scanf("%d",&a[i]);

  }
f(a);
return 0;
}


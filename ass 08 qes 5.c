#include <stdio.h>
int f(int b[5]){
  int k =0;
   for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){

      if ( b[i]==b[j]){
          k+=1 ;
          printf("%d\n",b[i]);
      break;
      }

    }
   }
printf("%d\n",k );
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



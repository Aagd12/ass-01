#include <stdio.h>
int f(int b[5]){
int i,j;

   for(i=0;i<5;i++){

for(j=0;j<5;j++){

      if (b[i]==b[j])
        break ;
   }

  if(i==j){
    printf("%d",b[i]);
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



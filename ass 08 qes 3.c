#include <stdio.h>

 void min(int b[5],int *m ,int *M){
     *m= b[0]
    *M = b[0] ;
 for(int i=1;i<5;i++){

  if (b[i]<*m)
    *m=b[i];
    if(b[i]>*M)
        *M=b[i];

 }



}

int main()

{
  int a[5],m,M;
  printf("enter the elment of array");
  for(int i=0;i<5;i++){
   scanf("%d",&a[i]);
  }
  min(a,&m,&M);
 printf("%d %d" ,m,M);

return 0;
}


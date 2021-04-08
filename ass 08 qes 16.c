#include <stdio.h>
//  Write a function in C to substract an element at the desired position from an array.

int substract(int a[3][3],int b[3][3],int rowsa){
int c[rowsa][rowsa];
int i,j,k,sum=0;
   for(i=0;i<rowsa;i++){
      for(j=0;j<rowsa;j++){
        sum=a[i][j]-b[i][j];
        c[i][j]=sum;

       }
   }
printf("result matrix");
   for(i=0;i<rowsa;i++){
      for(j=0;j<rowsa;j++){
        printf("%d",c[i][j]);
      }
      printf("\n");
   }




return 0;
}









int main(){
         printf("enter the rows of first matrix as same as declare in upper fuction ");
     int i,j,rowsa,columnsa,rowsb,columnsb;
     printf("enter the rows of first matrix");
     scanf("%d",&rowsa);
     columnsa=rowsa;
     int a[rowsa][columnsa];
      printf("enter the elments of first matrix a:");
      for(i=0;i<rowsa;i++){
        for(j=0;j<columnsa;j++){
        scanf("%d",&a[i][j]);
        }
      }
     printf("enter the  rows of second matrix same as firstother was not add ");
     scanf("%d",&rowsb);
     columnsb=rowsb;
     int b[rowsb][columnsb];
      printf("enter the elments of first matrix b:");
      for(i=0;i<rowsb;i++){
        for(j=0;j<columnsb;j++){
        scanf("%d",&b[i][j]);
        }
      }
  substract(a,b,rowsa);
return 0;
}

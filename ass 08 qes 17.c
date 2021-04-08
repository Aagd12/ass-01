#include <stdio.h>
//Write a function in C for the multiplication of two matrices.
int product(int a[3][3],int b[3][3],int rowsa,int rowsb,int columnsb){
int c[3][3];
int i,j,k,sum=0;
   for(i=0;i<rowsa;i++){
      for(j=0;j<columnsb;j++){
          for(k=0;k<rowsb;k++){
            sum+=a[i][k]*b[k][j];
          }
           c[i][j]=sum;
            sum=0;
       }


    }


printf("result matrix ");
   for(i=0;i<rowsa;i++){
      for(j=0;j<columnsb;j++){
        printf("%d ",c[i][j]);
      }
      printf("\n");
   }




return 0;
}









int main(){
         printf("enter the rows of first matrix as same as declare in upper fuction ");
     int i,j,rowsa,columnsa,rowsb,columnsb;
     scanf("%d",&rowsa);
     printf("enter the columns of first matrix");
     scanf("%d",&columnsa);
     int a[rowsa][columnsa];
      printf("enter the elments of first matrix a:");
      for(i=0;i<rowsa;i++){
        for(j=0;j<columnsa;j++){
        scanf("%d",&a[i][j]);
        }
      }
     printf("enter the  rows of second matrix same as columnsfirst matrix  ");
     scanf("%d",&rowsb);
     printf("enter the columns ofsecond matrix");
     scanf("%d",&columnsb);
     int b[rowsb][columnsb];
      printf("enter the elments of first matrix b:");
      for(i=0;i<rowsb;i++){
        for(j=0;j<columnsb;j++){
        scanf("%d",&b[i][j]);
        }
      }
 product(a,b,rowsa,rowsb,columnsb);
return 0;
}

#include<stdio.h>
//18. Write a function in C to find the transpose of a given matrix.
int transpose(int a[3][2],int rowsa,int columnsa){
int c[columnsa][rowsa];
int i,j,k,sum=0;
   for(i=0;i<columnsa;i++){
      for(j=0;j<rowsa;j++){
        c[i][j]=a[j][i];
       }
    }
    printf(" resultant matrix(transpose) ");
    for(i=0;i<columnsa;i++){
        for(j=0;j<rowsa;j++){
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
return 0;
}


int main(){
         printf("enter the rows of first matrix as same as declare in upper fuction ");
     int i,j,rowsa,columnsa;
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

     transpose(a,rowsa,columnsa);




      return 0;}

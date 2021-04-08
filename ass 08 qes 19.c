
#include <stdio.h>
//19. Write a program in C to find the sum of rows and columns of a matrix.


int main(){
         printf("enter the rows and columns of  matrix ");
     int i,j,rowsa,columnsa,rowsb,columnsb;
     scanf("%d %d",&rowsa,&columnsa);
     int a[rowsa][columnsa];
      printf("enter the elments of first matrix a:");
      for(i=0;i<rowsa;i++){
        for(j=0;j<columnsa;j++){
        scanf("%d",&a[i][j]);
        }
      }
      int sum=0;
    for(i=0;i<rowsa;i++){
        for(j=0;j<columnsa;j++){
         sum+=a[i][j];
        }
        printf("sum of %d rows is %d\n",i+1,sum);
        sum=0;
    }
  for(i=0;i<rowsa;i++){
        for(j=0;j<columnsa;j++){
         sum+=a[j][i];
        }
        printf("sum of %d columns is %d\n",j+1,sum);
        sum=0;
    }


return 0;
}

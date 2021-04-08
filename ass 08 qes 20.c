#include <stdio.h>

//20. Write a function in C to check whether a given matrix is an identity matrix.
int main(){
         printf("enter the rows and columns of  matrix ");
     int i,j,rowsa,columnsa,rowsb,columnsb;
     scanf("%d %d",&rowsa,&columnsa);
     if(rowsa==columnsa){
        int a[rowsa][columnsa];
        printf("enter the elments of first matrix a:");
        for(i=0;i<rowsa;i++){
          for(j=0;j<columnsa;j++){
           scanf("%d",&a[i][j]);
         }
       }
          for(i=0;i<rowsa;i++){

           for(j=0;j<columnsa;j++){
              if(i!=j&&a[i][j]!=0){
                printf("not identy matrix");
               return 0;
               }


              if(i==j&&a[i][j]!=a[0][0]){
              printf("not identy matrix");
            return 0;
              }

          }

        }
        printf(" identy matrix");

     }
        else printf("not identy matrix");

return 0;
}

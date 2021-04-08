#include <stdio.h>
 int main(){
 int i,j,k,n=10;
 for(i=1;i<=n;i++){
     if(i==1||i==n){
        for(j=1;j<=n;j++){
            printf("*");
        }

     }
     else{
          for(k=1;k<=n;k++){
              if(k==n-i)
                printf("*");
             else  printf(" ");

           }

      }

     printf("\n");


  }
//15
 for(i=1;i<=n;i++){
     if(i==1||i==n){
        for(j=1;j<=n;j++){
            printf("*");
        }

     }
     else{
          for(k=1;k<=n;k++){
              if(k==1||k==n)
                printf("*");
             else  printf(" ");

           }

      }

     printf("\n");


  }

 return 0;
 }

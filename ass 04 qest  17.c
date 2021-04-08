
#include <stdio.h>
 int main(){
 int i,j,k,n=4;
 for(i=1;i<=2*n-1;i++){
   if(i>=1&&i<=n){
     for(j=1;j<=2*n;j++){

        if(j>=1&&j<=n){
            if(j<=n-i+1)
                printf("(");
            else printf(" ");
         }
      if(j>=n+1&&j<=2*n){
            if(j>=2*n-i+1)
                printf(" ");
            else printf(")");
        }


     }
   }
   else{
        for(j=1;j<=2*n;j++){
        if(j>=1&&j<=n){

            if(j<=2*i-2*n+1)
                printf("(");
            else printf(" ");
         }
      if(j>=n+1&&j<=2*n){
            if(j>=3*n-2*i)
                printf(")");
            else printf(" ");
        }


     }
   }

   printf("\n");

 }

 return 0;

 }

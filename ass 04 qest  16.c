 #include <stdio.h>
 int main(){
 int i,j,k,n=8;
 for(i=1;i<=n;i++){

      for(j=1;j<=4*n;j++){

        if(j>=1&&j<=n){
            if(j<=n-i+1)
                printf("<");
            else printf(" ");
        }



        if(j>=n+1&&j<=2*n){
            if(j<=n+i)
                printf("(");
            else printf(" ");
        }



        if(j>=2*n+1&&j<=3*n){
            if(j>=3*n-i+1)
                printf(")");
            else printf(" ");
        }



        if(j>=3*n+1&&j<=4*n){
            if(j>=4*n-i+1)
                printf(">");
            else printf(" ");
        }

   }
   printf("\n");

 }

 return 0;

 }

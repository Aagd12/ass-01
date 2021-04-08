
#include <stdio.h>
#include <stdlib.h>
int assending(int a[],int n){
   int *p=(int *)calloc(n,sizeof(int ));
   int *q=(int *)calloc(n,sizeof(int ));
    int even=0,odd=0;

   for(int i=0;i<n;i++){
        if(a[i]%2==0){

         p[even++]=a[i];
              }

         else  q[odd++]=a[i];
           }



/*for(int i=0;i<n;i++){
    printf("%d",p[i]);
 } printf("\nenter thesecond last elment of array p;");

printf("%d",p[n-2]);
 printf("\nenter the desending order of array p;");
*/  printf("enter the assending  order even of array p;");
for(int i=0;i<even;i++){
    printf("%d",p[i]);
   }
   printf("enter the assending order of odd array q;");
 for(int i=0;i<odd;i++){
    printf("%d",q[i]);
 }

return 0;
    }







 int main(){
     int size;
  printf("enter the size of array");
  scanf("%d",&size);
int *a=(int *)calloc(size,sizeof(int ));
 printf("enter the elment  of array");
for(int i=0;i<size;i++){
    scanf("%d",&a[i]);
}
assending(a,size);

 return 0;
 }

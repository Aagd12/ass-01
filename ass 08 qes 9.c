#include <stdio.h>
#include <stdlib.h>
int freqencey(int a[],int n){
    char *p=(char *) calloc(n,sizeof(char));
    int duplicate=0;
   for(int i=0;i<n;i++){
    if(p[i]==0){
        printf("%d\n",a[i]);
       for(int j=0;j<n;j++){
        if(a[i]==a[j]){
         duplicate++;
          p[j]=1;
         }
       }
       printf("freqencey of %d is %d",a[i],duplicate);

    }
printf("\n");
duplicate=0;

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
freqencey(a,10);


 return 0;
 }

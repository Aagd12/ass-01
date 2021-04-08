#include <stdio.h>
//  Write a function in C to delete an element at the desired position from an array.

int delateindex(int *a,int n){
    int i,j;
printf("enter the  delating index no");
scanf("%d",&j);
  for(int i=0;i<=j;i++){
    if(i==j){
   for(int i=j;i<n;i++){
       a[i]=a[i+1];

     }
    }

  }

  return 0;
}










int main(){
     int i,j;
   int a[10]={1,2,3,4,5,6,7,8,9,10};
   int n=sizeof(a)/sizeof(a[0]);
   delateindex(a,n);
      printf("write the array element after delating  the array");
  for(int i=0;i<n-1;i++){
   printf("%d",a[i]);
    }
return 0;
}

#include <stdio.h>
//  Write a function in C to add an element at the desired position from an array.

int addindex(int a[],int n){
    int i,j,k;
printf("enter the  adding  index no ");
scanf("%d",&j);
printf("enter the  adding  elment  no ");
scanf("%d",&k);
  for(int i=0;i<=j;i++){
    if(i==j){
   for(int i=n;i>j;i--){
       a[i]=a[i-1];

     }
    }

  }
a[j]=k;
  return 0;
}

int main(){
     int i,j;
   int a[10]={1,2,3,4,5,6,7,8,9,10};
   int n=sizeof(a)/sizeof(a[0]);
   addindex(a,n);
      printf("write the array element after adding  the array");
  for(int i=0;i<n+1;i++){
   printf("%d",a[i]);
    }
return 0;
}


#include <stdio.h>
//Write a function in C to move all zeroes to the end of a given array.
void movingzero(int *a,int m){
    int temp;
 for(int i=0;i<m;i++){
     int index=i;
      for(int j=i+1;j<m;j++){
         if(a[j]>a[index]){
           index=j;
         }
       }
        temp=a[i];
        a[i]=a[index];
        a[index]=temp;

    }
}
 int main(){
 int a[10]={1,2,0,0,5,6,0,8,0,6};
  int m=sizeof(a)/sizeof(int );
 for(int i=0;i<m;i++){
      printf("%d ",a[i]);
  }
movingzero(a,m);
 printf("after moving all zeroin end of array");
  for(int i=0;i<m;i++){
      printf("%d ",a[i]);
      }
 return 0;
 }

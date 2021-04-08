#include <stdio.h>
//Write a function in C to find if a given integer x appears more than n/2 times in an array of n integers.
int find(int *a,int x,int n){
  int count =0;
  for(int i=0;i<n;i++){
    if(a[i]==x){
        count++;
        continue;
     }
   }
    if(count>=n/2){
        printf("%d",x);
     }
  else
    printf("no integer in araray that occurs atleast n/2 ");
}
int main(){
int x=5,i,j;
int a[10]={1,2,2,1,5,2,5,2,2,2};
find(a,x,10);

return 0;
}

#include <stdio.h>
//Write a program in C to separate odd and even integers stored in an array into two separate arrays.

int oddeven(int a[],int n){
    int p[n],q[n];
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
          p[i]=a[i];
       printf("even integers in array is %d\n",a[i]);
          }
         else{
             q[i]=a[i];
            printf("odd integers in array is %d\n",a[i]);
          }



   //  int *c=p,*d=q;

 }
return 0;

}





int main(){
int i,j;
int a[10]={1,2,3,4,5,6,7,8,9,10};
 oddeven(a,10);

return 0;
}

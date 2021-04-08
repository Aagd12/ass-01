#include <stdio.h>
//Write a function in C to implement bubble sort.
int bubblesort(int *a,int n){
    int i,j=1,k=0,count=0,temp;
    for(i=n-1;i>=0;i--){
      while(k<=i-1&&j<=i){
        if(a[k]>a[j]){
           temp=a[k];
           a[k]=a[j];
           a[j]=temp;
           printf("%d %d\n",a[k],a[j]);
           else
            count++;
         }
        k++;
        j++;
      }
      if(count==n-1)
        break;
      k=0,j=1;
    }

return 0;
}


int main()
{
int a[10]={1,2,3,4,5,6,7,8,9,10};
int n=sizeof(a)/sizeof(int );

bubblesort(a,n);
for(int i=0;i<n;i++){
    printf("%d",a[i]);
}


return 0;
}

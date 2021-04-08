
#include <stdio.h>
  int main()

 {
    int n=8,i,count=1,j,sum=0;
    for(i=1;i<n;i++){
            count=1;
     if(n%i!=0){
        count =0;}
        if(count){

        sum+=i;}
     }
    if(sum==n){
     printf("%d is perfect number",n);
    }
    else{
        printf("%d is not perfect number",n);

    }

    return 0;
}

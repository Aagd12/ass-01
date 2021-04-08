#include <stdio.h>
int main()
{
    int n=123456,count=0;
  /*  for(n ;n>0;){
     int degit=n%10;
     printf("%d\n",degit);
      count+=1;
n=n/10;*/

    while (n>0){
     n/=10;
     count++;
    }

printf("number of digit is %d",count);













    return 0;
}

#include <stdio.h>
//Write a recursive function in C to find the factorial of a positive integer.
int main()
{
  int n=-5,fact(int n);
  printf("factorial of %d is %d",n,fact( n));
}
int fact(int n){
printf("fact(%d)\n",n);

if(n<=0){
  return 1;
}
else if(n==1){
  return 1;
  }
 return n*fact(n-1);


}

#include <stdio.h>

// 19.Write a recursive function in C to find the number of digits in a positive integer.

int f(int n){

  if(n==0)

     return 0;
  return 1+f(n/10);
}
//20. Write a recursive function in C to find the sum of digits in a positive integer.

int g(int n){

  if(n==0)

     return 0;
  return (n%10)+g(n/10);
}
//21. Write a recursive function in C to reverse a positive integer.
 int sum=0 ,degit;
int reverse(int n){

 if(n){

    degit= n%10  ;
  sum*=10+degit;
   reverse(n/10);

}
else
 return sum;
 return sum;
}

int main()
{
   int n=12;
 printf("%d\n",f(n));
  printf("%d\n",g(n));
 printf("%d",reverse(n));
 return 0;
}

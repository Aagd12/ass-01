#include <stdio.h>
//Write a function in C that takes a positive integer n as an argument and returns the
//largest power of two greater than or equal to n.
int main()
{
  int n=33;
  int largestpowerof2(int n);
  printf("%d",largestpowerof2(n));
}

int largestpowerof2(int n){
int count=1;
while(count<n){

if (count>=n){

      return count;}
 else
  count*=2;

  }

   return count;
}

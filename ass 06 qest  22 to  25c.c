#include <stdio.h>
//21Write a recursive function in C to find the greatest common divisor (GCD) of two int numbers.





int gcd( int a,int b){
  int min;
  if(a==b)
 return a;
  if(a<b)
        min=a;
  else
     min=b;
if(b%min==0&&a%min==0)
    return min;

else {
    return gcd(min-1,b);
}


}
//23. Write a tail-recursive function in C to find the factorial of a positive integer.


int fact(int n){
if(n==1){
   return 1;
}

return n*fact(n-1);


}
//24. Write a tail-recursive function in C to find the summation of the first n natural numbers.

int sum(int n){

if(n==1){
    return 1;
}

return n+sum(n-1);
}









int main()
{

int a=20,n=5,b=40;

 printf("%d\n",gcd (a,b) );

 printf("%d\n",fact(n) );
printf("%d\n",sum(n) );

}


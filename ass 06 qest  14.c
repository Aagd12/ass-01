#include <stdio.h>
//Write a recursive function in C to find the summation of the first n natural numbers

int summation(int n){
if(n==0){
return 0;
}

return n+summation(n-1);

}
//Write a recursive function in C to find the ith number in the Fibonacci sequence.
int fibo(int n){
if(n==1){
    return 0;
}
if(n==2){
   return 1;
}
return fibo(n-1)+fibo(n-2);
}
//Write a recursive function in C to find xn, where x is a real value, and n is a positiveinteger.
int f(int x,int n){

if(n==0){
    return 1;
}
else if(n==1){
      return x;
}
return x*f(x,n-1);
 }
//Write a recursive function in C to find the sum of all even numbers in a given range.
int even(int start ,int end){
  if(start==end){
    return end;
}

if(start>end){
    return 0;
}
 else if(start<=end&&end%2==0){
        return end+even(start,end-2);

}
else if(start<=end&&end%2!=0)  {
    int temp=end-1;
    end=temp;
    return end+even(start,end-2);
}









}















int main()
{
 int n=5,x=2;
 int start=4,end=6;
 printf("%d\n",summation(n)) ;
  printf("%d\n",fibo(n)) ;

  printf("%d\n",even(start,end)) ;

}

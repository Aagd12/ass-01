#include <stdio.h>
//Write a function in C that takes a positive integer as input and returns the leading
//digit in its decimal representation. For example, the leading digit of 234567 is 2.
int main()
{
 int n=23567,leadingdegit(int );
 printf("%d",leadingdegit(n)) ;
}
int leadingdegit(int n){
  int lastdegit;
while(n>0){
 lastdegit= n%10;
 n/=10;

}
return lastdegit;


}

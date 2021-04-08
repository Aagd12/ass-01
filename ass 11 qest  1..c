#include <stdio.h>
int sqare(int n){
  return n*n;

  }
#define sqare(n) n*n
#define test 14



int main()

{
  #if test >5&&test<10

  printf("test is defined");
  #elif test>15
  printf("hello");
  #else
  printf("test is not defined");
  #endif // test


    int i=1;
    int x=128/sqare(++i);
printf("%d\n",x);
#undef sqare
int y=128/sqare(++i);
printf("%d",y);
    return 0;
}

#include <stdio.h>

void f(){

 printf("Line: %2d, Function: %s\n", __LINE__, __func__);
 return; // function declaration}
}
void g() { // function declaration and definition
 printf("Line: %2d, Function: %s\n", __LINE__, __func__);
 return  ;
 }
 int main() {
 printf("Line: %2d, Function: %s\n", __LINE__, __func__);
 printf("Line: %2d, Function: %s\n", __LINE__, __func__);
 f(); // function call

int a=2,b=3;
 int add(int a, int b);
 printf("Line: %2d, Function: %s\n", __LINE__, __func__);
 g(); // function call
 printf("Line: %2d, Function: %s\n", __LINE__, __func__);
 printf("%d + %d = %d\n", a, b, add(a, b)); // function call
 printf("Line: %2d, Function: %s\n", __LINE__, __func__);
 // Will return a garbage value; may cause warning
 }


int add(int a, int b) { // function definition
 printf("Line: %d, Function: %s\n", __LINE__, __func__);
 return a + b;
 }


#include <stdio.h>
//write a function in C that takes two pointers to integers and swaps the variables.Solution:



int main() {
 int a = 2, b = 3;
 void swap(int *pa, int *pb);
 swap(&a, &b);
 printf("a = %d, b = %d", a, b);
 }

void swap(int *pa, int *pb) {
 *pa ^= *pb;
 *pb ^= *pa;
 *pa ^= *pb;
 }

#include <stdio.h>
//Write a program in C to create an array of type int of size 5. Use the scanf function
//to take user inputs initializing the array. Then, print the elements of the array
int i,j;/*
int main()
{
int a[5] ;
printf("enter the elment of array a:");
for(i=0;i<5;i++){
    scanf("%d",&a[i]);

}
printf("enter the elment of array a:");

for(i=0;i<5;i++){
   printf("%d",a[i]);

}
return 0;
}
*/
int main() {
 int array[5];
 for (int i = 0; i < 5; i ++) {
 scanf("%d", array + i);
 printf("%p\n",&array+i);
 }
for (int i = 0; i < 5; i ++) {
printf("%d ", *(array + i));
 }
 }

#include <stdio.h>
//Write a program in C to print the address of each character in a given string. Thestring is user input.
int main()
{
 char a[6];
 printf("enter the string:");
scanf("%s",a);

printf("address of each string elment ");
for(int i=0;i<6;i++){
    printf("%d is address of %c character\n",&a[i],a[i]);

}
printf("%s",a);

  return 0;
}

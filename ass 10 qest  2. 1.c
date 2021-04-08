#include <stdio.h>
#include <string.h>
//Concatenate two strings using the strcat function. The strings are user inputs.
int main()
{
  char a[100],b[100],c[100];
 printf("enter the string elment a:");
 gets(a);
 printf("enter the string elment b:");
 gets(b);
 printf("enter the string elment c:");
 strcat(a," ");
 strcat(a,b);
 printf("%s",a);

    return 0;
}

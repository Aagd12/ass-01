#include <stdio.h>
#include <string.h>
//Compare two strings without using the strcmp function. The strings are user inputs
int main()
{
  char a[100],b[100];
 printf("enter the string elment a:");
 gets(a);
 printf("enter the string elment b:");
 gets(b);
 int c=strcmp(a,b);
 printf("%d",c);

    return 0;
}

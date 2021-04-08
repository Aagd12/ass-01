#include <stdio.h>
#include <string.h>
//Calculate length of a string using the strlen function. The string is a user input
int main()
{
  char a[100],b[100];
 printf("enter the string elment a:");
 gets(a);
 printf("enter the string elment b:");
 gets(b);
 int c=strlen(a);
 int d=strlen(b);
 printf("%d %d",c,d);

    return 0;
}


#include <stdio.h>
#include <string.h>
//Copy one string to another string  using the strcpy function. The string is user input
int main()
{
  char a[100],b[100],i;
 printf("enter the string elment a:");
 gets(a);
 int lent=strlen(a);
 printf("enter the string elment b that is copying of string a::");
 strcpy(b,a);
 printf(b);
    return 0;
}

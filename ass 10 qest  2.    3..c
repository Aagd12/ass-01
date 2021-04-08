#include <stdio.h>
#include <string.h>
//Compare two strings without using the strcmp function. The strings are user inputs
int main()
{
  char a[100],b[100],i=0,j=0;
 printf("enter the string elment a:");
 gets(a);
 printf("enter the string elment b:");
 gets(b);
  while(a[i]==b[i]&&a[i]){
    i++;
  }
  printf("%d",a[i]-b[i]);

    return 0;
}

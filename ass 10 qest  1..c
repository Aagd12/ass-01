#include <stdio.h>
#include <string.h>
//Concatenate two strings using the strcat function. The strings are user inputs.
int main()
{
  char a[100],b[100],c[100],i=0,j=0;
 printf("enter the string elment a:");
 gets(a);
 printf("enter the string elment b:");
 gets(b);
 printf("enter the string elment c:");
while(a[i]){
    i++;
}
while(b[j]){
    a[i++]=b[j++];
}
a[i]='\0';
puts(a);
    return 0;
}

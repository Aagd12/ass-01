#include <stdio.h>
#include <string.h>
//Copy one string to another string without using the strcpy function. The string is user input
int main()
{
  char a[100],b[100],i;
 printf("enter the string elment b:");
 gets(b);
 //int lent=strlen(a);
 /*printf("enter the string elment b that is copying of string a::");
 for(i=0;i<lent;i++){
    b[i]=a[i];
 }
 b[i]='\0';
*/
i=0;
while(b[i]){
    a[i]=b[i];
    i++;
}
a[i]='\0';
puts(a);
    return 0;
}

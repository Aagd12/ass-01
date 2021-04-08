#include <stdio.h>
#include <string.h>
int main()
{
 char a[100],b[100];
 int count =0,flage=0,i=0;
 printf("enter the elment of string ");
 gets(a);
 //int lent=strlen(a);
  while(a[i]){
        i++;
      count++;
        }
   printf("%d",count);
   return 0;
}


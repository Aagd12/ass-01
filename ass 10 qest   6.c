#include <stdio.h>
#include <string.h>
int main()
{
 char a[100],b[100];
 int count =0,flage=0,j=0;
 printf("enter the elment of string ");
 gets(a);
 int lent=strlen(a);
  for(int i=lent-1;i>=0;i--){
  b[j++]=a[i];
  }
   b[j]='\0';
   puts(b);

   return 0;
}

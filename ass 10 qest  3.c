#include <stdio.h>
#include <string.h>
//Write a program in C to convert all lowercase characters to uppercase in a string. The string is user input.

int main()
{
char a[100];
 int count =0,flage=0,i=0;
 printf("enter the elment of string ");
 gets(a);

 while(a[i]==0||a[i]>=97&&a[i]<=122){
        if(a[i]==0){
        i++;
        continue;
        }
    a[i]=a[i]-32;
    i++;
 }
 printf(a);
  return 0;
}


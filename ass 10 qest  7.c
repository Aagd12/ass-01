#include <stdio.h>
#include <string.h>
//Write a program in C to word-wise reverse a string. The string is user input. For
//instance for input string
//This is an example.
//the output should be
//example. an is This

 int searching(int n,char *a ){
while(a[n]!=32){
  n--;

}a[n]='\0';
 return n;
}
void print(char *a,int m){
while(a[m]){
    printf("%c",a[m]);
m++;

}
printf(" ");
}
int main()
{
char a[100];
 int count =0,flage=0,i=0;
 printf("enter the elment of string ");
 gets(a);
int lent=strlen(a);
 int m=searching(lent-1,a) ;

 print(a,m+1);
 int p=searching(m-1,a);

 print(a,p+1);
 int r=searching(p-1,a);

 print(a,r+1);

  int s=searching(r-1,a);

 print(a,s+1);
 return 0;
}

#include <stdio.h>
#include<string.h>
/*Write a program in C to word-wise reverse each sentence in a paragraph. The paragraph
(string) is user input. For instance, for input string
This is an example. Another sentence goes here.
the output should be
example an is This. here goes sentence Another.*/
int searchingdot(int n,char *a ){
while(a[n]!=46){
  n++;
}
 return n;
}
int searchingwhitespace(int n,char *a ){
while(a[n]!=32){
  n--;

}a[n]='\0';
 return n;
}
void print(char *a,int m){
while(a[m]){
if(a[m]==46)
    break;
    printf("%c",a[m]);
m++;

}
printf(" ");
}
int main()
{
char a[100];
 int count =0,flage=0,i=0;
 printf("enter the elment of string\n");
 gets(a);
int lent=strlen(a);
 int m=searchingdot(i,a) ;
int n=searchingwhitespace(m,a) ;
 print(a,n+1);
 int p=searchingwhitespace(n-1,a);
 print(a,p+1);
 int r=searchingwhitespace(p-1,a);
 print(a,r+1);
  int s=searchingwhitespace(r-1,a);
 print(a,s+1);
printf(".");
int t=searchingdot(m+1,a) ;
 int u=searchingwhitespace(t,a) ;
 print(a,u+1);
 int v=searchingwhitespace(u-1,a);
 print(a,v+1);
 int w=searchingwhitespace(v-1,a);
 print(a,w+1);
  int x=searchingwhitespace(w-1,a);
 print(a,x+1);
 printf(".");
 return 0;
}


#include <stdio.h>
#include <string.h>
//Write a program in C to calculate the number of vowels in a string. The string is user input
int main()
{
 char a[100];
 int count =0,flage=0;
 printf("enter the elment of string ");
 gets(a);
 int lent=strlen(a);
 for(int i=0;i<lent;i++){
    if(a[i]=='a'||a[i]=='e'|| a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
        count++;
 printf("%d  %d is index nuber for this vovel %c\n",count,i,a[i]);
    }
    else{
            flage++;
        printf("%d  %d is index nuber for this constonant %c\n",count,i,a[i]);
    }
 }
  printf("%d is the number of constonant in string %s\n :",count,a);
  printf("%d is the number of constonant in string %s\n :",flage,a);

    return 0;
}

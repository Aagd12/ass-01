# include <stdio.h>
#include <string.h>
int n=0;
void swap(char *a,int i){
for(int j=i-1;j>=n;j--){
    printf("%c",a[j]);
}
 n=i+1;
printf(" ");
}


int main()
{
   char a[100];
    gets(a);
    int lent=strlen(a);
    for(int i=0;i<lent;i++){
        if(a[i]==32){
            swap(a,i);
        }

    }


    return 0;*/
}

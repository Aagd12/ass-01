#include <stdio.h>
#include <string.h>
#include <stdlib.h>
extern int i=5,j=10;
void add(int a,int b){
printf("%d",a+b);

}
void multi(int a,int b){
printf("%d",a*b);

}
void divis(int a,int b){
printf("%d",a/b);

}
void sub(int a,int b){
printf("%d",a-b);

}
void delt(int *a,int *b){
    a=b;

printf("%d",*a);

}
int main()
{ printf("%d %d",i,j);
    int a=10,b=5,choise=0;
     printf("1 for add\n");
      printf("2 for multi\n");
      printf("3 for divis\n");
      printf("4 for delt\n");
  do{

      scanf("%d",&choise);
    switch(choise){
   case 1:add(a,b);
   break;
    case 2:multi(a,b);
   break;
    case 3:divis(a,b);
   break;
    case 4:delt(&a,&b);
    break;
    default : printf(" this is wrong choise");
    break;
    }
  }
while(choise<6);

    return 0;
}


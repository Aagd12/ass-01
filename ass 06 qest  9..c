#include <stdio.h>
int max(int a,int b,int c);

int main()
{
int  a=3,b=10,c=20;

 printf("%d\n",max(a,b,c));
 }


int max(int a, int b,int c){
if (a > b&&a>c){


    return  a;

}
else if(b>c&&b>a){

    return b ;
}
else{

    return c;
  }
}


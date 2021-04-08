 #include <stdio.h>

int main(){
 int add(int,int);
int a=2,b=5;
int s=add(a,b);
printf("%d + %d =%d",a,b,s);
return 0;
}
int add(int x,int y){
 int sum=x+y;
 return sum;

 }



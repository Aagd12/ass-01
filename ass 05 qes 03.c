#include <stdio.h>
void f(int n)
{

printf ("%d %p\n",n,&n);
n--;
if(n>0){
  f(n);
printf ("%d %p\n",n,&n);

}

return;

}

int main()
{
    int n=5;
  printf ("%d %p\n",n,&n);
  f(n);
return 0;
}

 #include <stdio.h>
 int main()
{
 int n=1531
 int a,b,c;
/* c=n%10;
 b=(n/10)%10;
 a=n/100;
 n=c*1+b*10+a*100;
 if(n==a*a*a+b*b*b+c*c*c)
 printf("number is armstrong");
 else
 printf("number is not armstrong");
*/
int number=n,sum=0;

while (number>0)
{
int  degit=number%10;
printf("%d\n",degit);

    sum+=degit*degit*degit;
    printf("%d\n",sum);
    number/=10;
}
printf("%d\n",sum);
if(sum==n)
printf("\nnumber is armstrong");
else
printf("not armstrong");


 return 0;
}

#include <stdio.h>
int main()
{
 /*   int a,b,c;
    a=95,b=97,c=180-95-97;
    if (a+b+c==180&&a>0&&b>0&&c>0)
printf("valid");
else printf("not valid");
*/

double a=22.0/7,b=3.0,c=180-22.0/7-3.0;
double diff=180-(a+b+c);
double max_eror=.000000;
double abs_diff=diff>.0?diff:abs_diff;
if (max_eror>abs_diff&&a>0&&b>0&&c>0)
printf("valid");
else printf("invalid");













    return 0;
}


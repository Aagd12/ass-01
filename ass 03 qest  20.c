# include <stdio.h>
int main()
{

    int marks, grade;

    marks=5;
    if(marks>=90&&marks<=100)
    printf("grade=A");
    if (marks >=80&&marks<=89)
    printf("grade=B");
if (marks >=70&&marks<=79)
    printf("grade=C");

if (marks >=60&&marks<=69)
    printf("grade=D");

if (marks >=50&&marks<=59)
    printf("grade=E");

if (marks >=40&&marks<=49)
    printf("grade=p");
if (marks >=0&&marks<=39)
    printf("grade=F");


if (marks<0&&marks>100)
printf("X");







    return 0;
}


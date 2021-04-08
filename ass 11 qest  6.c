#include <stdio.h>
#pragma pack(1)
/*Define a union that contains (i) a char variable, (ii) an int variable, (iii) a float
variable, and (iv) a double variable. Now, perform following:
i. Create an object of the union. Print the address of each variable.
ii. Print the size of the union using the sizeof() operator.
iii. Create an object of the union and initialize it to zero (use “= f0g” during initialization).
Assign a value to the char variable and print the other member
variables.
iv. Create an object of the union and initialize it to zero (use “= f0g” during initialization).
Assign a value to the int variable and print the other member
variables.
v. Use a pointer to th created object. Now, access the elements using the “->”
operator.*/
union student {
int roll;
double gpa;
float cgp;
char sex;

};
//void scan(union student *s1){
//scanf("%d %c %lg %f",&s1->roll,&s1->sex,&s1->gpa,&s1->cgp);
//}

int main()
{

union  student s1;
printf("%d %d %d %d",&s1.roll,&s1.sex,&s1.gpa,&s1.cgp);
printf("\n%d",sizeof(s1));
//scan(&s1);

s1.roll=123;
s1.sex='M'
printf("%d %c",s1.roll,s1.sex);
//print(&s1);


    return 0;
}

#include <stdio.h>
/*
Create a structure student in C to store the following information about a student:
i. name, a string (an array) of 11 characters.
ii. roll, an integer.
iii. sex, a character, ‘M’ (male), ‘F’ (female), ‘T’ (third gender/ other).
iv. gpa, i.e., grade point average, a real (double) value.
Now, perform the following:
i. Write a function to print an instance of the structure. You need to pass an
instance of student to the function. You need to use the “.” operaotor to
access the member variables.
ii. Create an instance/ object of student. Print the address of the instance. Now,
print the address of each of its member variables. Print the size of the structure
using the sizeof() operator.
iii. Use the preprocessor directive
#pragma pack(1)
before defining the structure. Create an instance/ object of student. Print the
address of the instance. Now, print the address of each of its member variables.
Print the size of the structure using the sizeof() operator.
iv. Create an array of five student objects taking user inputs. Print the details of
each student. Print the address of each of the five objects.*/




struct student {
int roll;double gpa;
char sex;
char name[11];
}s1;
void scan(struct student *students){

for(int i=0;i<2;i++){
    scanf("%d %c %lg %s",&students[i].roll,& students[i].sex,&students[i].gpa,&students[i].name);
}
}
void print (struct student *students){

    for(int i=0;i<2;i++){
       printf("%d %c %lg %s",students[i].roll,students[i].sex,students[i].gpa,students[i].name);
     }

}
void scan_1(struct student *s){

scanf("%d %c %lg %s",&s->roll,&s->sex,&s->gpa,&s->name);
}
void print_1(struct student *s){

printf("%d %c %lg %s",s->roll,s->sex,s->gpa,s->name);
}



int main()
{
struct student students[2]={0};
scan(students);
/*for(int i=0;i<2;i++){
    scanf("%d %c %lg %s",&students[i].roll,& students[i].sex,&students[i].gpa,&students[i].name);
}
for(int i=0;i<2;i++){
printf("%d %c %lg %s",students[i].roll,students[i].sex,students[i].gpa,students[i].name);
}
for(int i=0;i<2;i++){

    printf("%d %d %d %d",&students[i].roll,& students[i].sex,&students[i].gpa,&students[i].name);
}

*/
print(students);

scan_1(&s1);
print_1(&s1);
return 0;
}


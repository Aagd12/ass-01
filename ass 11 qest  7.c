#include <stdio.h>
/*
Define a structure S that has two member variables: (i) a member of type int and (ii)
a member that of a nested-structure, P. P has two member variables: (i) a member
variable of type char, and (ii) a member variable of a nested-union U. U has a member
of type char and a member of type float. Create an object of this structure. Scan each
of these member variables from the keyboard. Print each of these member variables.*/
struct s_t{
    int roll;
    struct p{
       char ch;
       union s{
          char sex;
           float cgp;

       }g1;

    }c1;

}s1;
int main(){
//scanf("%d %c %c %f",&s1.roll,&(&s1.c1)->ch,&(&(&s1.c1)->g1)->sex,&(&(&s1.c1)->g1)->cgp);
scanf("%d %c %c %f",&s1.roll,&s1.c1.ch,&s1.c1.g1.sex,&s1.c1.g1.cgp);
printf("%d %c %c %f",s1.roll,(&s1.c1)->ch,(&(&s1.c1)->g1)->sex,(&(&s1.c1)->g1)->cgp);





return 0;}

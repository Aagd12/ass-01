#include <stdio.h>
int main()
{

    double  basicsalary,grosssalary;
    basicsalary =4000;
  if(basicsalary<=30000)
  {

     printf ("salary" );
  }
    else if(basicsalary>30000&&basicsalary<=60000)
  {
      grosssalary=basicsalary+basicsalary*.25+basicsalary*.35;
    printf("%g",grosssalary);

  }
     else if(basicsalary>60000)
  {


   grosssalary=basicsalary+basicsalary*.30+basicsalary*.40;
    printf("%g",grosssalary);
  }







    return 0;
}


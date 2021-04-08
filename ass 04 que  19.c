#include <stdio.h>
  int main()

 {
    int  n=15 ,count=2,i,j,prime=1;
    for(i=1;i<n;i++){
      count=2;
      if(n%i!=0)
      count=0;
    if (count)
     printf("%d\n",i);

  }








    return 0;
}

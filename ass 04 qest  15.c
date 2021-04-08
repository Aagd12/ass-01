
 #include <stdio.h>
  int main()

 {
    int  n=15 ,count=2,i;
    for(i=2;i<n;i++){

 if(n%i==0){
     printf("not prime\n");
     break;
  }

else

  {
count++;
  }

    }
      printf("%d\n",i);
if(n==count){
            printf("prime number");

}





    return 0;
}

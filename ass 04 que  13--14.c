 #include <stdio.h>
  int main()

 {
    int n=12345 ,reverse=0,sum=0,product=1,degit;;
    for(;n>0;n/=10){
        degit=n%10;
        sum+=degit;
        product*=degit;

        reverse=reverse*10+degit;

    }
     printf("sum of number is %d\n",sum);





printf("product of number is %d\n",product);
printf("reverse of number is %d\n",reverse);


    return 0;
}



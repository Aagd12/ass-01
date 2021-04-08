#include <stdio.h>
int main (int a,int b){
  a=1,b=100000;
for (;a<b;a++){
    if(isstrongnumber(a)){
        printf("%d is strong number\n",a);
    }
}

}

int isstrongnumber(int (a)){
    int s=a, sum=0;
    int fact=1;
    while(s>0){
        fact=1;
int degit=s%10;

for(int i=1;i<=degit;i++){

    fact*=i;
}

sum+=fact;

s/=10;
}

if (sum==a){
    return 1;
}

return 0;
}












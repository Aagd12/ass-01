#include <stdio.h>

int main(){
int n=5, isprime(int n);
if(isprime(n)){
    printf("%d is prime\n",n);
}
else {
  printf("%d is not prime\n",n);
}

}
int isprime(int n){
for(int i=2;i<n;i++){
 if(n%i==0){
   return 0;
 }

}
 return 1;
}





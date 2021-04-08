 #include <stdio.h>
//Write a function in C to check whether an array is a subset of another array.
void b_issubset(int *a,int *b,int n ,int m){
    for(int i=0;i<m;i++){
     int count =0;
       for(int j=0;j<n;j++){
      if(b[i]==a[j])
        break;
       else
        count++;
       }
       if(count==n){
        printf("not subset");
        break;
       }if(i==m-1)
      printf("subset");
   }
}






 int main(){
 int a[10]={1,2,3,4,5,6,7,8,8,6};
int n=sizeof(a)/sizeof(int );
 int b[4]={1,2,3,4,5,8,8,1,6};
  int m=sizeof(b)/sizeof(int );
   printf("% d",m);
 b_issubset(a,b,n,m);
 return 0;
 }


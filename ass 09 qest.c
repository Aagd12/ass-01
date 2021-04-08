 #include <stdio.h>
int secondlargest(int *a,int m){
 for(int i=0;i<m;i++){
    if(a[i]>=a[0])
    continue;
    printf("%d",a[i]);
    return 0;
 }
}
 int main(){
 int a[10]={1,2,3,4,5,6,7,8,8,6};
 int index=0,i,j,temp;
 for(i=0;i<10;i++){
        index=i;
    for(j=i+1;j<10;j++){
       if(a[j]>a[index]){
        index=j;
       }
       temp=a[i];
       a[i]=a[index];
       a[index]=temp;
    }
 }
 printf("second largest number in the aarary:\n");
 secondlargest(a,10);
 return 0;
 }

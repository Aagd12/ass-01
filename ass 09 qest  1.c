#include<stdio.h>
#include<stdlib.h>
int **creat2Darray(int m,int n){
   int **a=(int **) calloc(m,sizeof(int *));
   for(int i=0;i<m;i++){
    a[i]=(int *) calloc(n,sizeof(int ));
    }
   return a;
}

int **destroy2Darray(int **a,int m){
for(int i=0;i<m;i++){
    free(a[m]);
  }
  free(a);
return 0;
}
void scan2Darray(int **a,int m,int n ){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

}
void print2Darray(int **a,int m,int n ){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

}
void add(int **a,int **b,int **c,int m,int n ){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           c[i][j]=a[i][j]+b[i][j];
        }
    }

}
void sub(int **a,int **b,int **d,int m,int n ){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           d[i][j]=a[i][j]-b[i][j];
        }
    }

}
int main(){
int m=3,n=3;
int **a=creat2Darray(m,n);
printf("enter the %d*%d arary",m,n);
scan2Darray(a,m,n);
print2Darray(a,m,n);

int **b=creat2Darray(m,n);
printf("enter the  %d*%d of arary",m,n);
scan2Darray(b,m,n);
print2Darray(b,m,n);
int **c=creat2Darray(m,n);
add(a,b,c,m,n);
printf("enter the resultant %d*%d of matrix",m,n);
print2Darray(c,m,n);
int **d=creat2Darray(m,n);
sub(a,b,d,m,n);
printf("enter the resultant %d*%d of matrix",m,n);
print2Darray(d,m,n);
destroy2Darray(a,m);
destroy2Darray(b,m);
destroy2Darray(c,m);
destroy2Darray(d,m);
return 0;
}

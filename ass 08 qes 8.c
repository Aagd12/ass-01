#include <stdio.h>

int uniqeelmentinab(int p[],int q[],int sizea,int sizeb){
    int sizemax=sizea<sizeb?sizeb:sizea;
int b[sizemax],c[sizemax];
int i,j;
for ( i=0;i<=sizea;i++){
   for( j=0;j<=sizea;j++){
    if(p[i]=p[j])
        break;

   }
    if(i==j)
  b[i]=p[i];
}

for (int i=0;i<=sizeb;i++){
   for(int j=0;j<=sizeb;j++){
    if(q[i]=q[j])
        break;

   }
    if(i==j)
    c[i]=q[i];
}
int *d;
d=b;
  for ( i=0;i<=sizemax;i++){
        if(*(&d[i])!=0)
 printf("%d",*(&d[i]));

   }
int *e;
e=c;
 for ( i=0;i<=sizemax;i++){
   for( j=0;j<=sizemax;j++){
    if(e[i]!=d[i])
    {

      if(e[i]!=0)
        printf("%d",e[i]);
    }


   }


}
return 0;
}













int main(){
int sizea,sizeb;
    printf("enter the size of array a:");
    scanf("%d",&sizea);

int a[sizea];
printf("enter the elment of array a:");
for(int i=0;i<sizea;i++){
  scanf("%d",&a[i]);

}

printf("enter the size of array b:");
    scanf("%d",&sizeb);

  int b[sizeb];
  printf("enter the elment of array b:");
 for(int k=0;k<sizeb;k++){
  scanf("%d",&b[k]);
  }


 uniqeelmentinab(a,b,sizea,sizeb);
return 0;
 }

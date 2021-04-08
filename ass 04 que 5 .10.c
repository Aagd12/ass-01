include <stdio.h>
int main ()
{
int n=4,p,j,k;
for(p=n;p>=1;p--){
 for(j=n;j>0&&j<=n;j--){ if(j>=p)
    printf("%d",p);
else printf(" ");

 }

printf("\n");

}



    return 0;
}

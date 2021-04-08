#include <stdio.h>
int main ()
{
int n=4,p,j,k;
for(p=1;p<=n;p++){
 for(j=1;j<=n;j++){ if(j<p)
    printf(" ");
else printf("&");
 }


printf("\n");

}



    return 0;
}

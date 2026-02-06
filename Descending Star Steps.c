#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
       for(j=1;j<=i;j++)
       {
           printf("*");
       }
         printf("\n");  
    }
    return 0;
}

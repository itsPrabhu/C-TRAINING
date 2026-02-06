#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int c1,q1,c2,q2,c3,q3,budject;
    scanf("%d %d\n%d %d\n%d %d",&c1,&q1,&c2,&q2,&c3,&q3);
    scanf("%d",&budject);
    double tb=(c1*q1)+(c2*q2)+(c3*q3);
    double fb=tb*1.10;
    printf("Total (Before Tax): %.2f\n",tb);
        printf("Total (After Tax): %.2f\n",fb);

    if(fb<=budject)
        printf("Within Budget");
    else
        printf("Over Budget");
    
    
    return 0;
}

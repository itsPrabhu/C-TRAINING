#include <stdio.h>
#include <math.h>

int main() {
   int n;
    scanf("%d",&n);
    int count=0;
    int temp=n;
    int sum=0;
    while(temp>0){
        count+=1;
        temp/=10;
    }
    temp=n;
    while(temp>0){
         int digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }
    if(sum ==n)
        printf("true");
    else
        printf("false");
    
     return 0;
}

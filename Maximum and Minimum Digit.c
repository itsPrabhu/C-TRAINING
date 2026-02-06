#include <stdio.h>
#include <string.h>

int main() {
    char n[100];
    scanf("%s", n);

    int i;
    int max = 0;
    int min = 9;

    for(i = 0; i < strlen(n); i++) {
        if(n[i] >= '0' && n[i] <= '9') {   
            int digit = n[i] - '0';       

            if(digit > max)
                max = digit;

            if(digit < min)
                min = digit;
        }
    }

    printf("%d %d", max, min);
    return 0;
}

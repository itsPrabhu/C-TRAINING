#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    int totalRows = 2*N - 1;
    for(int i = 1; i <= totalRows; i++) {
        int dist = abs(N - i);

        for(int s = 0; s < dist; s++)
            printf(" ");
        printf("*");
        if(i != 1 && i != totalRows)
        {
            int middle = 2*(N - dist) - 3;
            for(int s = 0; s < middle; s++)
                printf(" ");
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

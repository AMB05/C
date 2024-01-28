#include <stdio.h>

int main() {
    int i, j;
    int n = 5; 

    for (i = 1; i <= n; i++) 
    {
        j = 1;
        while (j <= i) {
            printf("* ");//perhatikan spasi
            j++;
        }
        printf("\n");
    }
    return 0;
}



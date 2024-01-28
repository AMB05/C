#include <stdio.h>

int main() {
    printf("Bilangan berpangkat 2 dari 1 sampai 10:\n");

    for (int i = 1; i <= 10; i++) {
        int pangkatDua = i * i;
        printf("%d^2 = %d\n", i, pangkatDua);
    }

    return 0;
}
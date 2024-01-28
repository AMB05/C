#include <stdio.h>

int main() {
    char kata[50];

    printf("Masukkan sebuah kata: ");
    gets(kata);

    printf("Anda memasukkan: ");
    puts(kata);

    return 0;
}


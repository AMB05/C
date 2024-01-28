#include <stdio.h>

int main() {
    char kata[50];

    printf("Masukkan sebuah kata: ");
    gets(kata);

    printf("Kata yang diinputkan: %s", kata);

    return 0;
}


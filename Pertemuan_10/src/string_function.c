#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100], string3[100];

    // Copying string
    strcpy(string1, "Hello");
    strcpy(string2, "World");
    printf("String1: %s\n", string1);
    printf("String2: %s\n", string2);

    // Concatenating string (penggabungan)
    strcat(string1, " ");
    strcat(string1, string2);
    printf("String3 (penggabungan): %s\n", string1);

    // mencari panjang string
    printf("Panjang dari String1: %d\n", strlen(string1));

    // Comparing strings (perbandingan)
    strcpy(string3, "Hello");
    int result = strcmp(string1, string3);
    if(result == 0)
        printf("String1 and String3 are equal.\n");
    else if(result > 0)
        printf("String1 is greater than String3.\n");
    else
        printf("String1 is less than String3.\n");

    return 0;
}



#include <stdio.h>


int main()
{
    int jawaban;
    char pw;

    // printf("Berapakah hasil 3+4?\n");
    // printf("jawab> ");
    // scanf("%d", &jawaban);

    // printf("Jawaban anda: %s\n", (jawaban == 7) ? 
    // "Benar" : "Salah");

    printf("Input password : \n");
    printf("PW >>> : ");
    scanf("%s", &pw);

    printf("Password = %s\n", (pw == 'A') ? 
    "Benar" : "Salah");
}


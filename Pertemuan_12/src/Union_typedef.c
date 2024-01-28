#include <stdio.h>

typedef union { //typedef union
    int i;  //anggota union int
    float f; //anggota union float
    char str[20]; //anggota union array string
} MyUnion;

int main() {
    MyUnion u; //deklarasi typedef union dengan variabel u

    u.i = 10; //akses anggota union dan memberikan nilai
    printf("u.i = %d\n", u.i);

    u.f = 220.5; //akses anggota union dan memberikan nilai
    printf("u.f = %.1f\n", u.f);

    //akses anggota union dan memberikan nilai
    sprintf(u.str, "Hello, World!"); 
    printf("u.str = %s\n", u.str);

    return 0;
}


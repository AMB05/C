#include <stdio.h>

int segitiga(int alas, int tinggi); //membuat fungsi

int main () //fungsi utama
{
    int a, b;

    printf("Program Menghitung Luas Segitiga\n");
    printf("--------------------------------\n");
    printf("Input Alas = \n");
    scanf("%i", &a);
    printf("Input Tinggi = \n");
    scanf("%i", &b);
    printf("\n");

    segitiga(a,b); //memanggil fungsi dan memberikan nilai parameter
}

int segitiga(int alas, int tinggi) //fungsi dengan parameter tanpa nilai balik
{
    float luas = 0.5 * alas * tinggi;

    printf("Hasil luas Segitiga = %f", luas);
}





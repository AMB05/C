#include <stdio.h>

float lingkaran (float r); //membuat fungsi

int main() //fungsi utama
{
    float r;

    printf("Program Menghitung Luas Lingkaran\n");
    printf("---------------------------------\n");
    printf("Input Jari-Jari = \n");
    scanf("%f", &r);

    printf("Luas Lingkaran = \n"); //memanggil fungsi dengan parameter
    printf("%f", lingkaran(r));
}

float lingkaran (float r) //fungsi dengan parameter dengan nilai balik
{
    float luas = 3.14*r*r;
    return luas; //nilai balik
}


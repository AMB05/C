#include <stdio.h>

int tambah(int a, int b){ //fungsi tambah parameter int a dan b
    int hasil = a+b;
    printf("hasil = %i", hasil);
}

int kurang(int a, int b){ //fungsi kurang parameter int a dan b
    int hasil = a-b;
    printf("hasil = %i", hasil);
}

int kali(int a, int b){ //fungsi kali parameter int a dan b
    int hasil = a*b;
    printf("hasil = %i", hasil);
}

double bagi(int a, int b){ //fungsi bagi parameter int a dan b
    double hasil = a/b;
    printf("hasil = %f", hasil);
}

int main () //fungsi utama
{
    float a,b;
    int pilihan;
    printf("Program Kalkulator Sederhana\n");
    printf("----------------------------\n");
    printf("Input bilangan pertama : ");
    scanf("%f", &a);
    printf("Input bilangan kedua : ");
    scanf("%f", &b);
    printf("\nPilihan Operasi:\n1. Tambah \n2. Kurang \n3. Kali \n4.Bagi");
    
    printf("\nMasukkan angka operasi yang ingin dijalankan: ");
    scanf("%i",&pilihan);
    if (pilihan == 1) {
        tambah(a,b); //memanggil fungsi dengan parameter a & b
    } 
    else if (pilihan == 2) {
        kurang(a,b); //memanggil fungsi dengan parameter a & b
    }
    else if (pilihan == 3) {
        kali(a,b); //memanggil fungsi dengan parameter a & b
    }
    else if (pilihan == 4) {
        bagi(a,b); //memanggil fungsi dengan parameter a & b
    }
    else
    {
        printf("\nSALAH INPUT");
    }
    
    return 0;
}


